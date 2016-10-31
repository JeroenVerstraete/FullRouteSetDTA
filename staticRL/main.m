%% Clear and close everything
clear
clc
close all

%% First add the folders
% Matlab directory is 'ThesisJeroen'
javaclasspath('/Main Library/Static Assignment')
addpath(genpath(pwd))

%% Loading a simple network
networks={'highway.mat';'toy_cascetta.mat';'gent.mat';'leuven.mat'};
load(networks{3})

%plot the network
% plotNetwork(nodes,links,true,[]);
% plotLoadedLinks(nodes,links,links.length,true,[],[],[],'links.length');
% plotLoadedLinks(nodes,links,links.capacity,true,[],[],[],'links.capacity');

%% Initializing
%Initialize parameters
mu=1;
alpha = 0.15;
beta = 4;

%% Compute the Recursive Logit equilibrium
%calculate flow (and plot the covergence)
tic
flows = rlEq(odmatrix,links,mu,alpha,beta,[],[],[],true);
toc

%visualize the result
plotLoadedLinks(nodes,links,sum(flows,2),true,[],[],[],'Flows');
plotLoadedLinks(nodes,links,flows(:,1),true,[],[],[],'Flows naar node 1');
travel_costs = calculateCostBPR(alpha,beta,sum(flows,2),links.length,links.freeSpeed,links.capacity);
plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');
