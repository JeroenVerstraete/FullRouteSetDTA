function [ gap ] = reducedCostGap(originFlows,travelCosts,links,nodes)
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

totLinks = size(links.fromNode,1);
totNodes = size(nodes.x,1);
gap = 0;

strN=links.fromNode;
endN=links.toNode;

netCostMatrix=sparse(strN,endN,travelCosts,totNodes,totNodes);

for o=1:size(originFlows,2)
    if sum(originFlows(:,o)) > 0
        %for each origin calculate the shortest path tree using the
        %dijkstra algorithm. The shortest path three (minTree) is a binairy
        %variable that indicates if a link is on the shortest path or not.
        [parent, distance] = dijkstra(netCostMatrix,o);
        minTree =  parent(endN)==strN;

        for l=1:totLinks
            %search for links that carry flow comming from this origin and that 
            %are not part of the shortest path tree
            upNode = strN(l);
            downNode = endN(l);
            if distance(downNode)==inf || distance(upNode)==inf
            elseif minTree(l)==1
                %has flow and is part of the shortest path tree: do noting
            else
                %has flow and is not part of the shortest path tree:
                %calculate cost difference between shortest path and longer path
                reducedCost = travelCosts(l)-distance(downNode)+distance(upNode);
                if eps*10 < reducedCost
                    %update the gap:
                    %add the cost for every vehicle making use of that longer route
                    gap = gap + reducedCost*originFlows(l,o);
                end
            end
        end
    end
end