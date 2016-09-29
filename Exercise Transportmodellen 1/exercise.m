%% Clear and close everything
clear
clc
close all

%% First add these folders to the search path
javaclasspath('../Static Assignment');
addpath('../Static Assignment','../Main Library')

%% Loading a simple network
%This is similar to the network used in the textbook of Cascetta on p.442
load toy_cascetta.mat

%plot the network
plotNetwork(nodes,links,true,[]);

%The OD matrix is as follows
%From 1 to 4 = 2000
%From 3 to 4 =  500
%From 4 to 1 = 1000

%% Initializing
%Initialize parameters for the BPR function
alpha = 0.15;
beta = 4;

%% Compute a deterministic MSA assignment
%calculate flow (and plot the covergence)
tic
flows = MSA_DET(odmatrix,nodes,links);
toc

%visualize the result
plotLoadedLinks(nodes,links,flows,true,[],[],[],'Flows');
travel_costs = calculateCostBPR(alpha,beta,flows,links.length,links.freeSpeed,links.capacity);
plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');

%% Compute a stochastic MSA assignment
%calculate flow (and plot the covergence)
theta = 20;
tic
flows = MSA_STOCH_S(odmatrix,nodes,links,theta);
toc

%visualize the result
plotLoadedLinks(nodes,links,flows,true,[],[],[],'Flows');
travel_costs = calculateCostBPR(alpha,beta,flows,links.length,links.freeSpeed,links.capacity);
plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');

%% Compute a stochastic MSA assignment with Dial
%calculate flow (and plot the covergence)
tic
flows = MSA_STOCH_D(odmatrix,nodes,links,theta);
toc

%visualize the result
plotLoadedLinks(nodes,links,flows,true,[],[],[],'Flows');
travel_costs = calculateCostBPR(alpha,beta,flows,links.length,links.freeSpeed,links.capacity);
plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');

