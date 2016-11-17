javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all


%% test3
% TT link 2=1.25
% TT link 3=2.5

%% init
numL=4;
totT=10;
numD=1;
numN=2;

%% connectionmatrix
conn=zeros(numL,numL);
conn(1,2)=1;
conn(1,3)=1;
conn(2,4)=1;
conn(3,4)=1;

%% Test
TT=zeros(numL*totT,numL*totT);
% SF=zeros(numL*totT,numL*totT); %Split Fractions
simTT=repmat([0,1.25,2.5,1]',1,totT);
SF=SFRL(numL,totT,simTT,1,conn);

% TT= kost over volgende link
% TT= kost*connection
%t=1
TT(1,6)=1.25;
TT(1,10)=1.25;
% SF(1,6)=0.75;
% SF(1,10)=0.25;

TT(1,11)=2.5;
TT(1,15)=2.5;
% SF(1,11)=0.5;
% SF(1,15)=0.5;

TT(2,8)=1;
% SF(2,8)=1;
TT(3,8)=1;
% SF(3,8)=1;
%t=2
% TT(5,10)=1;
% TT(5,15)=2;
TT(6,12)=1;
TT(7,12)=1;
% SF(6,12)=1;
% SF(7,12)=1;
%t=3
% TT(9,14)=1;
% TT(9,19)=2;
TT(10,16)=1;
TT(11,16)=1;
% SF(10,16)=1;
% SF(11,16)=1;
%t=4
% TT(13,18)=1;
% TT(13,23)=2;
TT(14,20)=1;
TT(15,20)=1;
% SF(14,20)=1;
% SF(15,20)=1;
%t=5
% TT(17,22)=1;
% TT(17,27)=2;
TT(18,24)=1;
TT(19,24)=1;
% SF(18,24)=1;
% SF(19,24)=1;
%t=6
% TT(21,26)=1;
% TT(21,31)=2;
TT(22,28)=1;
TT(23,28)=1;
% SF(22,28)=1;
% SF(23,28)=1;
%t=7
% TT(25,30)=1;
% TT(25,35)=2;
TT(26,32)=1;
TT(27,32)=1;
% SF(26,32)=1;
% SF(27,32)=1;
%t=8
% TT(29,34)=1;
% TT(29,39)=2;
TT(30,36)=1;
TT(31,36)=1;
% SF(30,36)=1;
% SF(31,36)=1;
%t=9
% TT(33,38)=1;
% TT(33,39)=2;
TT(34,40)=1;
TT(35,40)=1;
% SF(34,40)=1;
% SF(35,40)=1;
%t=10
% TT(37,38)=1;
% TT(37,39)=2;
TT(38,40)=1;
TT(39,40)=1;
% SF(38,40)=1;
% SF(39,40)=1;

b=zeros(numL*totT,1);
b(4)=1;
b(8)=1;
b(12)=1;
b(16)=1;
b(20)=1;
b(24)=1;
b(28)=1;
b(32)=1;
b(36)=1;
b(40)=1;

%% compute v
beta_tt=-1;
v = beta_tt*TT;

%% Calculate M
%M dimensions: (L+O+D)*(L+O+D)
%only LL and OL are differend every iteration, [LL;OL]=LOL
mu=1;
LOL = exp(1/mu*v).*(TT>0);
M=LOL.*SF;

%% bepalen Z (1 matrix for all destinations)
z = (eye(length(b)) -M)\b;

%% bepaal P
P=zeros(numL*totT:numL*totT);
for i=1:numL*totT
    P(i,:)=M(i,:).*z(:,1)'/((M(i,:)*z(:,1))+eps);
end

 P(isnan(P))=0;
 
%% transformeren naar TF

TF = num2cell(ones(numN,totT,numD));
TF{1,1}=[P(1,6),P(1,11)];
TF{1,2}=[P(5,10),P(5,15)];
TF{1,3}=[P(9,14),P(9,19)];
TF{1,4}=[P(13,18),P(13,23)];
TF{1,5}=[P(17,22),P(17,27)];
TF{1,6}=[P(21,26),P(21,31)];
TF{1,7}=[P(25,30),P(25,35)];
TF{1,8}=[P(29,34),P(29,39)];
TF{1,9}=[P(33,38),P(33,39)];
TF{1,10}=[P(37,38),P(37,39)];

TF{2,1}=[1;1];
TF{2,2}=[1;1];
TF{2,3}=[1;1];
TF{2,4}=[1;1];
TF{2,5}=[1;1];
TF{2,6}=[1;1];
TF{2,7}=[1;1];
TF{2,8}=[1;1];
TF{2,9}=[1;1];
TF{2,10}=[1;1];