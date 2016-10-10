clear
close all

%% First add these folders to the search path
javaclasspath('../Static Assignment');
addpath('../Dynamic Assignment','../Static Assignment','../Main Library')

%% load the data

% load toy_cascetta.mat
% load leuven.mat
load gent.mat
load toy2.mat


%% Basic plotting functions
%plot the network
plotNetwork(nodes,links,true,[]);

%plot loads (capacities) on the links
plotLoadedLinks(nodes,links,links.capacity,true,[],[],[]);

%plot loads (number of outgoing links) on the nodes
nbOut = hist(links.fromNode,size(nodes.id,1));
plotLoadedNodes(nodes,links,nbOut',true,[],[],[]);

%% Setup the simulation

%setup the time interval and total number of time steps
dt = 0.004;
totT = 2/dt;

%build the full ODmatrix
[ODmatrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT);

%initilize the Turning Fractions (easy if no diverges in the network)
TF = num2cell(ones(size(nodes.id,1),totT));
for t=1:totT
    TF{10,t} = ones(2,1);
    TF{25,t} = ones(2,1);
    TF{15,t} = [0.9 0.1;
                0    1   ];
end
clear t;

%% Visualize the demand in the network

figure;
plot(dt*[0:totT-1],reshape(ODmatrix(1,1,:),1,[]),'d-b',dt*[0:totT-1],reshape(ODmatrix(3,1,:),1,[]),'.-r',dt*[0:totT-1],reshape(ODmatrix(4,1,:),1,[]),'x-g')
legend('OD 1-28','OD 37-28','OD 40-28')
xlabel('time (h)')
ylabel('flow (veh/h)')

figure;
plot(dt*[0:totT-1],reshape(ODmatrix(1,2,:),1,[]),'d-b',dt*[0:totT-1],reshape(ODmatrix(3,2,:),1,[]),'.-r',dt*[0:totT-1],reshape(ODmatrix(2,2,:),1,[]),'x-g')
legend('OD 1-31','OD 37-31','OD 34-31')
xlabel('time (h)')
ylabel('flow (veh/h)')
%% Compute the Dynamic Network Loading

%run LTM
tic
[cvn_up,cvn_down] = LTM_v1(nodes,links,origins,destinations,ODmatrix,dt,totT,TF);
toc

%% Transform CVN values to recognizable traffic states

%calculate the simulated flows
[simFlows_up] = cvn2flows(cvn_up,dt);
[simFlows_down] = cvn2flows(cvn_down,dt);
%calculate the simulated density
[simDensity] = cvn2dens(cvn_up,cvn_down,totT,links);

%% Visualize some results using XT diagrams

%Main road
plotXT(links,1:27,simFlows_up,dt,totT-1);
plotXT(links,1:27,simDensity,dt,totT);

%Crossing road
plotXT(links,[33:-1:31,28:30]',simFlows_down,dt,totT-1);
plotXT(links,[33:-1:31,28:30]',simDensity,dt,totT);
 