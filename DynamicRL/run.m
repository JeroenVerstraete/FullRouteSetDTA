javaclasspath('/MatlabTrafficToolbox/Dynamic Traffic Assignment')
addpath(genpath(pwd))
clear
clc
close all

load dym_3path.mat
plotNetwork(nodes,links,true,[]);


dt = 0.02; 
totT = round(2/dt);
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

rc_dt = dt;
max_it = 100;
alpha = 0.5;
theta = 0.010;

tic
[cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,max_it,alpha,theta);
toc

sp=[TF{2,:,1}];
figure;plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
grid on;
legend('fraction using the main road', 'fraction using the alternative');