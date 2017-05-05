javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all

load intersection.mat

plotNetwork(nodes,links,true,[]);

dt = 0.01;
totT = round(1.5/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);


rc_dt = dt;
max_it = 100;
alpha = 0.5;
theta = 1;
 
tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,lightintersection,dt,totT,rc_dt,max_it,alpha,theta,false,2);
toc

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);
