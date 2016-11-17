%% Test

TT=zeros(4*5,4*5);

%t=1
TT(1,6)=1;
TT(1,11)=1;
TT(2,8)=1;
TT(3,8)=1;
%t=2
TT(5,10)=1;
TT(5,15)=1;
TT(6,12)=2;
TT(7,12)=2;
%t=3
TT(9,14)=1;
TT(9,19)=1;
TT(10,16)=3;
TT(11,16)=3;
%t=4
TT(13,18)=1;
TT(13,19)=1+1;
TT(14,20)=4;
TT(15,20)=4;
%t=5
TT(17,18)=2;
TT(17,19)=1+2;
TT(18,20)=5;
TT(19,20)=5;

b=zeros(4*5,1);
b(4)=1;
b(8)=1;
b(12)=1;
b(16)=1;
b(20)=1;

%% compute v
beta_tt=-1;
v = beta_tt*TT;

%% Calculate M
%M dimensions: (L+O+D)*(L+O+D)
%only LL and OL are differend every iteration, [LL;OL]=LOL
mu=1;
LOL = exp(1/mu*v).*(TT>0);
M=LOL;

%% bepalen Z (1 matrix for all destinations)
z = (eye(length(b)) -M)\b;

%% bepaal P
for i=1:4*5
    P(i,:)=M(i,:).*z(:,1)'/((M(i,:)*z(:,1))+eps);
end

 P(isnan(P))=0;
 
%% transformeren naar TF

TF = num2cell(ones(2,5,1));
TF{1,1}=[P(1,6),P(1,11)];
TF{1,2}=[P(5,10),P(5,15)];
TF{1,3}=[P(9,14),P(9,19)];
TF{1,4}=[P(13,18),P(13,19)];
TF{1,5}=[P(13,18),P(13,19)];

TF{2,1}=[1;1];
TF{2,2}=[1;1];
TF{2,3}=[1;1];
TF{2,4}=[1;1];
TF{2,5}=[1;1];