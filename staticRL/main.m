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

%load leuven.mat

%plot the network
plotNetwork(nodes,links,true,[]);
plotLoadedLinks(nodes,links,links.length,true,[],[],[],'links.length');
plotLoadedLinks(nodes,links,links.capacity,true,[],[],[],'links.capacity');

%% Initializing
%Initialize parameters
mu=1;
alpha = 0.15;
beta = 4;

%% Compute a deterministic MSA assignment
%calculate flow (and plot the covergence)
tic
flows = MSArl(odmatrix,links,mu,[],[]);
toc

%visualize the result
plotLoadedLinks(nodes,links,sum(flows,2),true,[],[],[],'Flows');
plotLoadedLinks(nodes,links,flows(:,1),true,[],[],[],'Flows naar node 1');
travel_costs = calculateCostBPR(alpha,beta,sum(flows,2),links.length,links.freeSpeed,links.capacity);
plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');
