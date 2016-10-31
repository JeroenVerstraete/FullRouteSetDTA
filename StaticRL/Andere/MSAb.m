function [originFlows] = MSAb(ODmatrix,nodes,links,mu,travelCostsInit,originFlowsInit)
%Method of successive averages for calculating stochastic user
%equilibrium using Bell's method
%
%SYNTAX
%   [flows] = MSAd(ODmatrix,nodes,links,mu)
%
%DESCRIPTION
%   returns the flow on each link in the stochastic user equilibrium as
%   calculated by the method of successive averages combined with Dail's
%   network loading.
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   mu: scaling parameter of the model similar to the scaling parameter in 
%   the logit model

start_time = cputime;

maxIt = 2000; %Computation criterion

totLinks = size(links,2);

connectionMatrix = sparse([links.startNode],[links.endNode],[1:totLinks]);

it = 0; %iteration number;
gap = inf;

cm=hsv(64);
c=cm(ceil(rand*63),:);

if isempty(originFlowsInit)
    originFlows=zeros(totLinks,size(ODmatrix,1));
else
    originFlows=originFlowsInit;
end

alpha = 0.15;
beta = 4;

if isempty(travelCostsInit)
    travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),[links.length]',[links.freeSpeed]',[links.capacity]');
else
    travelCosts = travelCostsInit;
end


while it < maxIt && gap>10^-3
    it = it+1;
        
    %Update costs
    %note that the total flow on a link is the sum of the origin based flow
    %on that link
     %Compute new flows via dail
    newOriginFlows = Bell(ODmatrix,nodes,links,travelCosts,mu);

    %calculate the update step
    update = (newOriginFlows - originFlows);
    
    %calculate new flows
    originFlows = originFlows + (1/(it^(2/3)))*update;%
    
%     %reset after 10 iterations
%     if it/50==(ceil(it/50));
%         originFlows=newOriginFlows;
%     end

    %convergence gap
    %gap = max(max(abs(update*it)));
    travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),[links.length]',[links.freeSpeed]',[links.capacity]');
    gap = sum(sum(abs(update)));
    %gap = reducedCostGap(originFlows,travelCosts,links,nodes);
     
    %plot convergence
    figure(1001) 
    hold on
    plot(cputime-start_time,log10(gap),'.','MarkerEdgeColor',c,'MarkerFaceColor',c,'MarkerSize',10);
%     plot(it,log10(gap),'.','MarkerEdgeColor',c,'MarkerFaceColor',c,'MarkerSize',10);
end
display(['it: ',num2str(it)]);
display(['gap (veh/h): ', num2str(gap)]);
display(['max update flow (veh/h): ',num2str(max(max(abs(update))))]);
display(['relative gap: ',num2str(gap/sum(sum(ODmatrix)))]);
display(['total Time ALG S-BELL ',num2str(cputime-start_time), 's']);

%Check for number of iteration
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Converged in iteration ', num2str(it)]);
end

end