%% Clear and close everything
clear
clc
close all

%% First add the folders
% Matlab directory is 'ThesisJeroen'
javaclasspath('/ThesisJeroen/Main Library/Static Assignment')
addpath(genpath(pwd))

%% Loading a simple network
networks={'highway.mat';'toy_cascetta.mat';'gent.mat';'leuven.mat';'network1.mat'};
load(networks{4})

[odmatrix,origins,destinations]=ODmatrix(odmatrix);
%plot the network
% plotNetwork(nodes,links,true,[]);
% plotLoadedLinks(nodes,links,links.length,true,[],[],[]);
% plotLoadedLinks(nodes,links,links.capacity,true,[],[],[],'links.capacity');

%% Initializing
%Initialize parameters
mu=1;
alpha = 0.15;
beta = 4;

%% Compute the Recursive Logit equilibrium
%calculate flow (and plot the covergence)
tic
flows = rlEq(odmatrix,origins,destinations,links,mu,alpha,beta,[],[],[],true);
toc

%visualize the result
plotLoadedLinksDifference(nodes,links,sum(flows,2)-sum(flows2,2),true,[],[],[],'Test');
plotLoadedLinks(nodes,links,sum(flows,2),true,[],[],[]);
plotLoadedLinks(nodes,links,flows(:,1),true,[],[],[]);
travel_costs = calculateCostBPR(alpha,beta,sum(flows,2),links.length,links.freeSpeed,links.capacity);
plotLoadedLinks(nodes,links,travel_costs,true,[],[],[]);
