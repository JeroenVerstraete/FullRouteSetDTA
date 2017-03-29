% addpath('../MatlabTrafficToolbox/Dynamic Traffic Assignment','../MatlabTrafficToolbox/Visualization Tools','../MatlabTrafficToolbox/Network Data')
% javaclasspath('../MatlabTrafficToolbox/Dynamic Traffic Assignment');

javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))

clear
clc
close all

load Dym_simple.mat
plotNetwork(nodes,links,true,[]);

dt = 0.01; 
totT = round(2/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

load TF.mat
[cvn_up,cvn_down] = LTM_MC(nodes,links,origins,destinations,ODmatrix,dt,totT,TF);


[simDensity] = cvn2dens(cvn_up,cvn_down,totT,links);
fRate = 10; %set frame rate
% fRate = inf; %allows the for manual control using space bar
animateSimulation(nodes,links,simDensity(:,1:end),dt*[0:totT],fRate);

[simFlows] = cvn2flows(cvn_up,dt);
fRate = Inf; %set frame rate
animateSimulation(nodes,links,simFlows(:,1:end),dt*[1:totT],fRate);
