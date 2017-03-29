javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all

load dym_largeTime.mat
plotNetwork(nodes,links,true,[]);


dt = 0.02; 
totT = round(12/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

rc_dt = dt;
max_it = 100;
alpha = 0.5;
theta = 0.010;

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,false,true);
toc

sp=[TF{6,:,1}];
figure;plot(dt*[0:totT-1],sp(1:3:end),'r',dt*[0:totT-1],sp(2:3:end),'b');
grid on;
legend('fraction using the main road', 'fraction using the alternative');

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);