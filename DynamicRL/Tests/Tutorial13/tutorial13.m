%% Tutorial 13: Same input as MatlabToolbox but with DTA_RL

javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all

load net6.mat

plotNetwork(nodes,links,true,[]);

dt = 0.01;
totT = round(1.5/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);


rc_dt = dt;
max_it = 100;
alpha = 0.5;
theta = 0.010;
 
tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,false,false);
toc

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);

%% Other network

load net7.mat

plotNetwork(nodes,links,true,[]);


dt = 0.01;
totT = round(1.5/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);


rc_dt = dt;
max_it = 100;
alpha = 0.05;
theta = 0.010;

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,false,false);
toc