javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all

load dym_largeTime2.mat
min_theta=1/min(links.length./links.freeSpeed);
plotNetwork(nodes,links,true,[]);

min_dt=min(links.length./links.freeSpeed);
dt = 0.02; 
totT = round(2/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

rc_dt = dt;
max_it = 100;
alpha = 1;
theta = 1;

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,false,true);
toc

sp=[TF{6,:,1}];
figure;plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
grid on;
legend('fraction using the main road', 'fraction using the alternative');

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);

dt=min_dt; %max dt to be sure everything passes on the link
totT = round(2/dt);
rc_dt=dt;
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,true,true);
toc

sp=[TF{6,:,1}];
figure;plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
grid on;
legend('fraction using the main road', 'fraction using the alternative');

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);