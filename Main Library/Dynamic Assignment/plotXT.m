function [h1]=plotXT(links,path,load,dt,totT)
%Plots a space time plot
%
%SYNTAX
%   [handle_fig]=plot_speed_xt(startNode,endNode,load,links,timeSteps,ti)
%
%DESCRIPTION
%   simulate the loads on the network
%
%INPUTS
%   startNode: start node
%   endNode: end node
%   load: the load 
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   timesteps: time steps of the simulation
%   ti: title

%local rename link properties
len=links.length;

coordinatesEnd=cumsum([0;len(path)]');
x=0:length(coordinatesEnd)-1;
x1=0.5:1:length(coordinatesEnd)-1;
coordinates = interp1(x,coordinatesEnd,x1)';
plotLoad=load(path,:);

handle_fig = figure('Units','pixels');
hold on
surf(0:dt:totT*dt,coordinates,plotLoad,'facecolor','texturemap','LineStyle','none')
view(2)
axis('tight') 
xlabel('Time [hr]','FontSize',12)
ylabel('Distance [km]','FontSize',12)
caxis([0 max(max(plotLoad))]);
colorbar('EastOutside');
my_jet = jet(512);
my_jet(1:250,:)=[];
colormap(my_jet);
grid on
title('Space - Time graph','FontSize',14,'fontweight','b')
set(handle_fig, 'Position', [100, 100, 400, 300]);
