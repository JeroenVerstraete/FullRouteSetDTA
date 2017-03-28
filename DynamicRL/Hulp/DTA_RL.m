function [cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,dt,totT,rc_dt,maxIt,alpha,theta,bfigure)

%Method of successive averages for calculating deterministic user
%equilibrium
%
%SYNTAX
%   [flows] = MSA_exercise(odmatrix,nodes,links)
%
%DESCRIPTION
%   returns the flow on each link in the deterministic user equilibrium as
%   calculated by the method of successive averages
%
%INPUTS
%   odmatrix: static origin/destination matrix
%   nodes: table with all the nodes in the network.
%   links: table with all the links in the network
    
% This file is part of the matlab package for dynamic traffic assignments 
% developed by the KULeuven. 
%
% Copyright (C) 2016  Himpe Willem, Leuven, Belgium
%
% This program is free software: you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation, either version 3 of the License, or
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program.  If not, see <http://www.gnu.org/licenses/>.
%
% More information at: http://www.mech.kuleuven.be/en/cib/traffic/downloads
% or contact: willem.himpe {@} kuleuven.be

%setup the output figure
if nargin < 12 || isempty(bfigure)
  bfigure = false;
  h = figure;
  semilogy(0,NaN);
end

start_time = cputime;

%Maximum number of iterations
if isempty(maxIt)
    maxIt = 20; 
end

%initilization
totNodes = size(nodes.id,1);
totLinks = size(links.toNode,1);
totDest = length(destinations);
%cumulative vehicle numbers (cvn) are stored on both upstream and
%dowsntream link end of each link for every time slice
cvn_up = zeros(totLinks,totT+1,totDest);
cvn_down = zeros(totLinks,totT+1,totDest);

%Initialize the iteration numbering
it = 0; 

%Initialize the aggragation 
rc_agg = 'last'; %[first/middle/last]

%initialize the travel cost
[simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);

%initialize the gap function
gap = inf;
gap_TF = inf;
gap_flow = inf;
TF = [];

UTurn=zeros(totLinks,totLinks);
connectionMatrix =zeros(totLinks,totLinks);
for l=1:totLinks
    connectionMatrix(l,[links.fromNode]==links.toNode(l))=1; %check if connection is possible
    UTurn(l,[links.fromNode]==links.toNode(l)&[links.toNode]==links.fromNode(l))=1; %check if u-turn
end

UTurn=sparse(UTurn);

if isempty((find(strcmp(links.Properties.VariableNames, 'level'))))
    %level1 is laagste level. snelweg heeft de hoogste level
    links=hierarchy(links);
end 

Hierarchy = zeros(totLinks,totLinks);
[linksFrom,linksTo]=find(connectionMatrix);
goingDown=links.level(linksFrom)>links.level(linksTo);
Hierarchy(linksFrom(goingDown)+totLinks*(linksTo(goingDown)-1))=1;
Hierarchy=sparse(Hierarchy);
%Hierachy only for going down!

%initialize the turning fractions (both first and last give the same result)
TF_new = stochasticTF_RL(nodes,links,destinations,simTT,cvn_up,dt,totT,rc_dt,rc_agg,theta,UTurn,Hierarchy);

[flows_up_prev] = cvn2flows(sum(cvn_up,3),dt);



%MAIN LOOP: iterate until convergence is reached or maximum number of
%iterations is reached
while it < maxIt && gap_flow > 10^-4
    it = it+1;
    gap_TF = 0;
    
    %calculate the update step
    if isempty(TF)
        TF = TF_new;
    else
%         alpha=1/it; %MSA
        for n = 1:totNodes
            for t = 1:totT
                for d= 1:totDest
                    update = (TF_new{n,t,d} - TF{n,t,d});
                    TF{n,t,d} = TF{n,t,d} + alpha*update;
                end
            end
        end
    end
    sp=[TF{2,:,1}];
    figure(10);plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
    drawnow
    
    %calculate new flows
    [cvn_up,cvn_down] = LTM_MC(nodes,links,origins,destinations,ODmatrix,dt,totT,TF);
    
    %update costs
    [simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);
    %update flows
    [flows_up] = cvn2flows(sum(cvn_up,3),dt);

    
    %Compute new turning fractions via all-or-nothing assignment
    %and compute convergence gap
    [TF_new,gap,gap_s] = stochasticTF_RL(nodes,links,destinations,simTT,cvn_up,dt,totT,rc_dt,rc_agg,theta,UTurn,Hierarchy);
    
    gap_flow = sum(sum(abs(flows_up-flows_up_prev)));
    %plot convergence in function of computation time
    if(bfigure)
        figure(h) 
        gap
        gap_flow
        hold on
        time=cputime-start_time;
        a=semilogy(time,gap,'r.');
        b=semilogy(time,gap_s,'ob');
        c=semilogy(time,gap_flow,'xg');
        legend([a,b,c],'gap based on simulation interval','adjusted gap based on simulation interval','total flow difference');
    end
    flows_up_prev = flows_up;
end

%Check for number of iterations until convergence
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt), ' Gap_flow: ', num2str(gap_flow), ' Gap: ', num2str(gap)]);
else
    disp(['Convergence reached in iteration ', num2str(it), ' Gap_flow: ', num2str(gap_flow), ' Gap: ', num2str(gap)]);
end

end


