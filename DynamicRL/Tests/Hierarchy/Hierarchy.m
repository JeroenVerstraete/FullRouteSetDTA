% addpath('../MatlabTrafficToolbox/Dynamic Traffic Assignment','../MatlabTrafficToolbox/Visualization Tools','../MatlabTrafficToolbox/Network Data')
% javaclasspath('../MatlabTrafficToolbox/Dynamic Traffic Assignment');

javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))

clear
clc
close all

%% Loading the data
% load dym_hierarchy.mat

load Dym_simple.mat
plotNetwork(nodes,links,true,[]);

%% Setup the simulation

%setup the time interval and total number of time steps
dt = 0.01; 
totT = round(2/dt);

%build the full ODmatrix
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

%% Setup the dynamic equilibrium simulation

%time interval for the route choice
rc_dt = dt;
%maximum number of iterations
max_it = 200;
%scaling of the updates over iterations (<1)
alpha = 0.1;
%scaling of the utility (logit)
theta = 0.010;
 
%run DTA with deterministic route choice and MSA averaging
tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta);
toc

%% Transform CVN values to travel times
% The upstream and dowsntream CVN functions of the link transmission model
% are transformed into travel times for every link in the network. The
% travel times are compared for the main route (from split to merge) and
% the alternative route.
%

% %calculate the simulated travel times
% [simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);
% 
% %visualize the travel time along the main route (from split to merge)
% [~,~,~,tt_m]=plotTT(links,1:6,simTT,dt,totT);
% title('Travel time graph main route','FontSize',14,'fontweight','b')
% %visualize the travel time along the alternative route (from split to merge)
% [~,~,~,tt_a]=plotTT(links,[1:3,7,8,4:6],simTT,dt,totT);
% title('Travel time graph alternative route','FontSize',14,'fontweight','b')
% 
% %compare both travel times
% figure;
% plot(dt*[0:totT],tt_m,'b',dt*[0:totT],tt_a,'r');
% grid on
% legend('Main route','Alternative route') 
% xlabel('Time [hr]','FontSize',12);
% ylabel('Travel Time [hr]','FontSize',12);
% title('Travel time graph','FontSize',14,'fontweight','b');


%% Visualize the split rates at the diverge
% The following lines of code visualize the splitting rates at the diverge. 
%

% 
% sp=[TF{2,:,1}];
% figure(10);plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
% grid on;
% legend('fraction using the main road', 'fraction using the alternative');


%% simulation

[cvn_up,cvn_down] = LTM_MC(nodes,links,origins,destinations,ODmatrix,dt,totT,TF);

[simDensity] = cvn2dens(cvn_up,cvn_down,totT,links);
fRate = 10; %set frame rate
% fRate = inf; %allows the for manual control using space bar
animateSimulation(nodes,links,simDensity(:,1:end),dt*[0:totT],fRate);

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);
