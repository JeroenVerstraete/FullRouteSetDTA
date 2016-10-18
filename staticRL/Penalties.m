%% Clear and close everything
clear
clc
close all

%% First add these folders to the search path
javaclasspath('Static Assignment');
addpath('Static Assignment','Main Library','staticRL')

%% Initializing
%Initialize parameters travelcost
mu=1;
alpha = 0.15;
beta = 4;

%% All routes
% While Dial's route set depends on the topologic order (and thus on the
% costs), the RL's route set is always complete

% On a simple netwerk, this can be visualised. 
% Consider the next network:
load highway.mat
plotNetwork(nodes,links,true,[]);
% With only a demand from node 1 to node 2
% If we now solve it by Dial, the convergence is not smooth
% (A 'o' indicates only 1 route has been found in the current situation,
% while a '.' indicates multiple routes.
flowsD = MSA_STOCH_D(odmatrix,nodes,links,mu);

% With a higher demand, the patern comes even more clear.
odmatrix(4)=100000;
MSA_STOCH_D(odmatrix,nodes,links,mu);
% After 500 iterations, the minimum gap has not been reached

% While RL always consider the 2 possible routes (there are no loops
% possible in this network)
rlEq(odmatrix,links,mu,[],[],[-1.5,0,0],true);

% Restore original demand
odmatrix(4)=10000;
flowsrl = rlEq(odmatrix,links,mu,[],[],[-1.5,0,0],true);

% Visualize the difference in link flows (from original demand)
flowsVerschil = sum(flowsrl,2)-sum(flowsD,2);
plotLoadedLinksDifference(nodes,links,flowsVerschil,true,[],3/max(flowsVerschil),[],'Flows RL-Dial');


travel_costsD = calculateCostBPR(alpha,beta,sum(flowsD,2),links.length,links.freeSpeed,links.capacity);
travel_costsrl = calculateCostBPR(alpha,beta,sum(flowsrl,2),links.length,links.freeSpeed,links.capacity);

%% Compute a deterministic MSA assignment
%calculate flow
% flowsrl is destination oriented, flowsD is origin oriented!



% h = figure;
% axis([-3 1 0 inf])
% 
% betas=[-1.5,-100,-1];
% 
% bmin=0;
% verschilmin=inf;
% for b = 0:-0.01:-2
%     betas(3)=b;
%     flowsrl = rlEq(odmatrix,links,mu,[],[],betas,false);
%     flowsVerschil = sum(flowsrl,2)-sum(flowsD,2);
%     absVerschil=sumabs(flowsVerschil);
%     figure(h)
%     hold on
%     plot(b,absVerschil,'r.')
%     drawnow;
%     if(absVerschil<verschilmin)
%         bmin=b;
%         verschilmin=absVerschil;
%     end
% end

%result: bmin=-1.17

%visualize the result
% plotLoadedLinks(nodes,links,sum(flowsrl,2),true,[],[],[],'Flows RL');
% plotLoadedLinks(nodes,links,sum(flowsD,2),true,[],[],[],'Flows Dial');
% plotLoadedLinksDifference(nodes,links,flowsVerschil,true,[],[],[],'Flows RL-Dial');
% travel_costs = calculateCostBPR(alpha,beta,sum(flows,2),links.length,links.freeSpeed,links.capacity);
% plotLoadedLinks(nodes,links,travel_costs,true,[],[],[],'Travel costs');
