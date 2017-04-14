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

links.length=links.length *10;
links.freeSpeed=links.length./max(0.05,links.length./links.freeSpeed);


plotNetwork(nodes,links,true,[]);

dt = 0.05; 
totT = round(2/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);


rc_dt = dt;
max_it = 100;
alpha = 0.5;
theta = 100;

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta,true,false);
toc


[simFlows] = cvn2flows(sum(cvn_up,3),dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);


sp=[TF{164,:,23}];
figure;plot(dt*[0:totT-1],sp(1:16:end),'r',dt*[0:totT-1],sp(5:16:end),'b',dt*[0:totT-1],sp(9:16:end),'black',dt*[0:totT-1],sp(13:16:end),'r');
grid on;
