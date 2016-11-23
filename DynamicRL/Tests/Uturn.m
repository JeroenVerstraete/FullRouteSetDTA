% addpath('../MatlabTrafficToolbox/Dynamic Traffic Assignment','../MatlabTrafficToolbox/Visualization Tools','../MatlabTrafficToolbox/Network Data')
% javaclasspath('../MatlabTrafficToolbox/Dynamic Traffic Assignment');

javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
%clear the work space
clear
%clear the command window
clc
%close all windows
close all

%% Loading the data

load dym_uturn.mat
% load net6.mat
plotNetwork(nodes,links,true,[]);

%% Setup the simulation
% Before the simulation can be run the time interval has to be set and the
% total number of time steps has to be defined. 
%

%setup the time interval and total number of time steps
dt = 0.001; 
totT = round(1.5/dt);

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

%calculate the simulated travel times
[simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);

%visualize the travel time along the main route (from split to merge)
[~,~,~,tt_m]=plotTT(links,1:6,simTT,dt,totT);
title('Travel time graph main route','FontSize',14,'fontweight','b')
%visualize the travel time along the alternative route (from split to merge)
[~,~,~,tt_a]=plotTT(links,[1:3,7,8,4:6],simTT,dt,totT);
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
%

sp=[TF{4,:,1}];
figure(10);plot(dt*[0:totT-1],sp(1:4:end),'r',dt*[0:totT-1],sp(3:4:end),'b');
grid on;
legend('fraction using the main road', 'fraction using the alternative');


%% simulation
[simDensity] = cvn2dens(cvn_up,cvn_down,totT,links);
fRate = 1; %set frame rate
% fRate = inf; %allows the for manual control using space bar
animateSimulation(nodes,links,simDensity(:,1:10:end),dt*[0:10:totT],fRate);
