%% Clear and close everything
clear
clc
close all

%% First add the folders
% Matlab directory is 'ThesisJeroen'
javaclasspath('/Main Library/Static Assignment')
addpath(genpath(pwd))

%% Loading a simple network
networks={'highway.mat';'toy_cascetta.mat';'gent.mat';'leuven.mat';'network1.mat'};
load(networks{4})

%% Initializing
%Initialize parameters
mu=1;
alpha = 0.15;
beta = 4;

%% Compute the Recursive Logit equilibrium full OD
%calculate flow (and plot the covergence)
origins=1:size(odmatrix,1);
destinations=origins;
tic
rlEq(odmatrix,origins,destinations,links,mu,alpha,beta,[],[],[],false);
toc

%% Compute the Recursive Logit equilibrium 
%calculate flow (and plot the covergence)
[odmatrix_new,origins,destinations]=ODmatrix(odmatrix);
tic
rlEq(odmatrix_new,origins,destinations,links,mu,alpha,beta,[],[],[],false);
toc
