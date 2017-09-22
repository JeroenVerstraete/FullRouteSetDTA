function [flows] = DFAST(odmatrix,nodes,links,theta,varargin)
%Method of successive averages for calculating deterministic user
%equilibrium
%
%SYNTAX
%   [flows] = DFAST(odmatrix,nodes,links)
%
%DESCRIPTION
%   returns the flow on each link in the stochastic user equilibrium as
%   calculated by the method of successive averages
%
%INPUTS
%   odmatrix: static origin/destination matrix
%   nodes: table with all the nodes in the network.
%   links: table with all the links in the network
%   theta: stochastic distribution parameter (related to the value of time) 

%setup the output figure
h = figure;
semilogy(0,NaN);
start_time = cputime;

%Maximum number of iterations
maxIt = 20; 

%Initialize the stop criterion
epsilon = 10^-3;

%initilization
totLinks = size(links.toNode,1);
totNodes = size(nodes.x,1);
strN = links.fromNode;
endN = links.toNode;
if nargin==5
    originFlows=varargin{1};
else
    originFlows=zeros(totLinks,size(odmatrix,1));
end

%initialize the travel cost
%note that the total flow on a link is the sum of the origin based flow
%on that link
alpha = 0.15;
beta = 4;
travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),links.length,links.freeSpeed,links.capacity);

%Compute dijkstra costs and store them in a cost-ordered structure
netCostMatrix=sparse(strN,endN,travelCosts,totNodes,totNodes);
orderN = zeros(totNodes,length(odmatrix));
for origin = 1:size(odmatrix,1)
    if sum(odmatrix(origin,:)) > 0
        [~, distance] = graphshortestpath2(netCostMatrix, origin);
        costTree = [nodes.id,distance];
        %order costTree on column 2
        costTree = sortrows(costTree,2);
        orderN(:,origin) = costTree(:,1);
    end
end

%Initialize the iteration numbering
it = 0; 

%initialize the gap function
gap = inf;

%MAIN LOOP: iterate until convergence is reached or maximum number of
%iterations is reached
while it < maxIt && gap > epsilon 
    it = it+1;
    
    %Compute new flows via the implicit routing scheme of Dail (1971) 
    newOriginFlows = Dial_F(odmatrix,nodes,links,orderN,travelCosts,theta);
    
    %calculate the update step
    update = (newOriginFlows - originFlows);
    
    %calculate new flows
    originFlows = originFlows + 1/it^(2/3)*update;
    
    %update costs
    travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),links.length,links.freeSpeed,links.capacity);
    
    %convergence gap
    gap = max(max(abs(update)));
        
    %plot convergence
    figure(h) 
    hold on
    semilogy(cputime-start_time,gap,'r.')
end
display(['it: ',num2str(it)]);
display(['gap (veh/h): ', num2str(gap)]);
display(['max update flow (veh/h): ',num2str(max(max(abs(update))))]);
display(['relative gap: ',num2str(gap/sum(sum(odmatrix)))]);
display(['total Time ALGD ',num2str(cputime-start_time), 's']);

%Check for number of iterations until convergence
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Converged in iteration ', num2str(it)]);
end

%Return the total flow for every linnk (sum over all origines)
flows = sum(originFlows,2);

end