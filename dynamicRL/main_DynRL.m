% run from FullRouteSetDTA directory
javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
%clear the work space
clear
%clear the command window
clc
%close all windows
close all

%% Loading the data

% Network and demand data
load net1.mat

% Plot the network
plotNetwork(nodes,links,true,[]);

%% Setup the simulation
% Before the simulation can be run the time interval has to be set and the
% total number of time steps has to be defined. 
%

%setup the time interval and total number of time steps
dt = 0.01; 
totT = round(2/dt);

%build the full ODmatrix
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

%% Setup the dynamic equilibrium simulation

%time interval for the route choice
rc_dt = dt;
%maximum number of iterations
max_it = 100;
%scaling of the updates over iterations (<1)
alpha = 0.5;
%scaling of the utility (logit)
theta = 0.010;
%beta parameters of penalties, Traveltime always beta=-1
betas=containers.Map();
%Define as betas('Uturn')=-2;
%Uturn, Hierarchy
 
%run DTA with deterministic route choice and MSA averaging
tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,betas);
toc


%
[simDensity] = cvn2dens(cvn_up,cvn_down,totT,links);
[simFlows_down] = cvn2flows(sum(cvn_down,3),dt);
fRate = inf;
animateSimulation(nodes,links,simDensity(:,1:1:end),dt*[0:1:totT],fRate); %only shows every 10th frame
animateSimulation(nodes,links,simFlows_down,dt*[0:1:totT],fRate); %only shows every 10th frame

%% Transform CVN values to travel times

%calculate the simulated travel times
[simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);

%visualize the travel time along the main route (from split to merge)
[~,~,~,tt_m]=plotTT(links,2:5,simTT,dt,totT);
title('Travel time graph main route','FontSize',14,'fontweight','b')
%visualize the travel time along the alternative route (from split to merge)
[~,~,~,tt_a]=plotTT(links,7:10,simTT,dt,totT);
title('Travel time graph alternative route','FontSize',14,'fontweight','b')

%compare both travel times
figure;
plot(dt*[0:totT],tt_m,'b',dt*[0:totT],tt_a,'r');
grid on
legend('Main route','Alternative route') 
xlabel('Time [hr]','FontSize',12);
ylabel('Travel Time [hr]','FontSize',12);
title('Travel time graph','FontSize',14,'fontweight','b');


%% Visualize the split rates at the diverge
% The following lines of code visualize the splitting rates at the diverge. 

sp=[TF{2,:,1}];
figure;plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
grid on;
legend('fraction using the main road', 'fraction using the alternative');
