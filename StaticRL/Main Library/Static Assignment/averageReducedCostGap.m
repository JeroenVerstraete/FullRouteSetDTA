function [ AEC , GAP, rc] = averageReducedCostGap(originFlows,travelCosts,strN,endN,ODmatrix,totNodes)
%Calculate the reduced cost gap for a network
%
%SYNTAX
%   [gap] = REDUCEDCOSTGAP(originFlows,travelCosts,links,nodes)
%
%DESCRIPTION
%   Returns the total reduced cost gap for a network. The reduced cost for 
%   a specific route between one origin and one destination is the 
%   difference between the cost of that route and the cost of the shortest 
%   path between the same origin and destination multiplied with the amount 
%   of traffic making use of that specific route. Note that as more and
%   routes are shortest paths the reduced cost gap tends to zero.
%
%INPUTS
%   originFlows: the flow on the network as a bush for each origin.
%   travelCosts: total cost on each link of the network
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.

rc = zeros(size(originFlows));

AEC = 0;
GAP = 0;
GAP_ = 0;

totLinks = length(strN);
netCostMatrix = sparse(strN,endN,travelCosts,totNodes,totNodes);


for o=1:size(originFlows,2)
    %if there is no departure flow at the origin than skip it
        if sum(originFlows(:,o))<=0
            continue;
        end
        
    %for each origin calculate the shortest path tree using the
    %dijkstra algorithm. The shortest path three (minTree) is a binairy
    %variable that indicates if a link is on the shortest path or not.
    [parent,distance]=graphshortestpath2(netCostMatrix,o);
        
    minTree =  parent(endN)==strN;

    l_index=false(totLinks,1);
    l_index(~minTree&distance(endN)~=inf&distance(strN)~=inf)=true;   
    reducedCost=travelCosts(l_index)-distance(endN(l_index))+distance(strN(l_index));
    rc(l_index,o)=reducedCost;
    AEC = AEC + sum(reducedCost.*originFlows(l_index,o));
    
    GAP_ = GAP_ + sum(travelCosts(l_index).*originFlows(l_index,o));
    GAP = GAP + sum((distance(endN(l_index))-distance(strN(l_index))).*originFlows(l_index,o));
end

AEC = AEC/sum(sum(ODmatrix));
GAP = 1-GAP/GAP_;
if AEC==0
    AEC=eps;
end