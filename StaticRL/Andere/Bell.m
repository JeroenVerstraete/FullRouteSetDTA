function [originFlows] = Bell(ODmatrix, nodes, links, travelCosts, mu)
%Bell's method for calculating a stochastic network loading
%
%
%SYNTAX
%   [originFlows] = Bell(ODmatrix, nodes, links, costs, theta)
%
%DESCRIPTION
%   Returns the flow on the network as a bush for each origin.
%   Flow is assigned to each link of the network according to Bell's
%   methods.
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.

totNodes = length(nodes);
totLinks = length(links);

originFlows = zeros(totLinks,size(ODmatrix,1));

netCostMatrix = 99999*ones(totNodes,totNodes);
idx = sub2ind(size(netCostMatrix), [links.startNode], [links.endNode]);
netCostMatrix(idx)=travelCosts;
netC=exp(-netCostMatrix/mu);
% netCostMatrix=netCostMatrix-diag(diag(netCostMatrix));

%
I = eye(totNodes);
W = (I-netC)^-1 - I;
W = W-diag(diag(W))+I;
%go over the origins
for i=1:totNodes
    for j=1:totNodes
        if i==j
            continue;
        end
        P=W(i,[links.startNode])'.*exp(-travelCosts/mu).*W([links.endNode],j)/W(i,j);
        P=max(0,P);
        originFlows(:,i)= originFlows(:,i)+P*ODmatrix(i,j);
    end
end

end