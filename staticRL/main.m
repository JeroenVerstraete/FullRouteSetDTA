%% Clear and close everything
clear
clc
close all

%% First add these folders to the search path
javaclasspath('../Static Assignment');
addpath('../Static Assignment','../Main Library')

%% Loading a simple network
%This is similar to the network used in the textbook of Cascetta on p.442
load toy_cascetta.mat

load leuven.mat

%plot the network
plotNetwork(nodes,links,true,[]);

%% Initializing
%Initialize parameters
mu=1;

%% Compute a deterministic MSA assignment
%calculate flow (and plot the covergence)
tic
flows = MSArl(odmatrix,nodes,links,mu,[],[]);
toc