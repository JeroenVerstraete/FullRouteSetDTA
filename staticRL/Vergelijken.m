%% Clear and close everything
clear
clc
close all

%% First add these folders to the search path

javaclasspath('Static Assignment');
addpath('Static Assignment','Main Library','staticRL')
% javaclasspath('../Static Assignment');
% addpath('../Static Assignment','../Main Library')

%% Loading a simple network
%This is similar to the network used in the textbook of Cascetta on p.442
% load toy_cascetta.mat

% load leuven.mat
load gent.mat

%plot the network
% plotNetwork(nodes,links,true,[]);
% plotLoadedLinks(nodes,links,links.length,true,[],[],[],'links.length');
% plotLoadedLinks(nodes,links,links.capacity,true,[],[],[],'links.capacity');

%% Initializing
%Initialize parameters
mu=1;
alpha = 0.15;
beta = 4;

%% Compute a deterministic MSA assignment
%calculate flow
% flowsrl is destination oriented, flowsD is origin oriented!


flowsD = MSA_STOCH_D(odmatrix,nodes,links,mu);
flowsrl = rlEq(odmatrix,links,mu,[],[],[]);
flowsVerschil = sum(flowsrl,2)-sum(flowsD,2);
absVerschil=sumabs(flowsVerschil);

%visualize the result
plotLoadedLinks(nodes,links,sum(flowsrl,2),true,[],[],[],'Flows RL');
plotLoadedLinks(nodes,links,sum(flowsD,2),true,[],[],[],'Flows Dial');
plotLoadedLinksDifference(nodes,links,flowsVerschil,true,[],[],[],'Flows RL-Dial');
% travel_costs = calculateCostBPR(alpha,beta,sum(flows,2),links.length,links.freeSpeed,links.capacity);
% plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');