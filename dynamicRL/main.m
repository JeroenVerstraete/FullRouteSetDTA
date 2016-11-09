clear
close all

%% First add the folders
% Matlab directory is 'ThesisJeroen'
javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))

load net5.mat
load test.mat

%% Setup the simulation

dt = 0.09;
totT = round(4/dt)+1;

%build the full ODmatrix
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

tt_free = repmat(links.length./links.freeSpeed,1,totT+1);
%Compute destination based turning fractions
TF = allOrNothingTF(nodes,links,destinations,tt_free,[],dt,totT,10*dt,'last');


%% Compute the Dynamic Network Loading

%run LTM
tic
[cvn_up,cvn_down] = ILTM_BASE(nodes,links,origins,destinations,ODmatrix,dt,totT,TF);
toc


%% Transform CVN values to recognizable traffic states


[simDensity] = cvn2dens(sum(cvn_up,3),sum(cvn_down,3),totT,links);
[simFlows_down] = cvn2flows(sum(cvn_down,3),dt);
[simFlows_up] = cvn2flows(sum(cvn_up,3),dt);

%% Visualize some results using XT diagrams

route = [1,3,2];
plotXT(links,route,simDensity,dt,totT);
title('XT-graph of densities (E40 E->W): Explicit LTM','FontSize',14,'fontweight','b')

%% TT
[simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);
[~,~,~,tt]=plotTT(links,route,simTT,dt,totT);