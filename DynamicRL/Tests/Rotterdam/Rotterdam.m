javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all

load rotterdam_my_OD
links = table;
links.id = [1:length([data.link.startNode])]';
links.fromNode = [data.link.startNode]';
links.toNode = [data.link.endNode]';
links.length = [data.link.length]';
links.freeSpeed = [data.link.freeSpeed]';
links.capacity = [data.link.capacity]';
links.kJam = [data.link.kJam]';

nodes = table;
nodes.id = [1:length([data.node.id])]';
nodes.xco = [data.node.x]';
nodes.yco = [data.node.y]';

ODmatrices = data.ODmatrices;
timeSeries = data.timeslices;

links.freeSpeed=links.length./max(0.01,links.length./links.freeSpeed);

plotNetwork(nodes,links,true,[]);

dt = 0.001; 
totT = round(2/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

rc_dt = dt;
max_it = 100;
alpha = 0.5;
theta = 100;

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,true,false);
toc


[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);