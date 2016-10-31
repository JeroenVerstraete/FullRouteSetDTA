function [originFlows,bush] = initialLoading(ODmatrix, nodes, strN,endN ,travelCosts,connectionMatrix)
%Create Initial Bush for Algorithm B
%
%SYNTAX
%   [originFlows,bush] = initialBush(ODmatrix, nodes, links, travelCosts)
%
%DESCRIPTION
%   Returns the flow on the network as a bush for each origin.
%   Flow is assigned only to the shortest path.
%   Shortest path is calculated using dijkstra's algorithm.
%   Initial bush contains all links that are efficient (according to
%   topological ordering)
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   travelCosts: the cost for traversing each link

%Remember that every node is a potential source or sink
%ODMatrix has a dimension of length(node) x length(node)
%and the flow is stored for each link
totLinks = size(strN,1);
totNodes = size(nodes.x,1);
originFlows = zeros(totLinks,size(ODmatrix,1));
bush = zeros(totLinks,size(ODmatrix,1));

        
for i = 1:size(ODmatrix,1)
    if sum(ODmatrix(i,:)) > 0
        %node i is a source and the shortest path is calculated to each node
        netCostMatrix = sparse(strN,endN,travelCosts,totNodes,totNodes);
        
        %can be faster if no routes are returned 
        %just go over all nodes starting with the destinations and use node
        %weights to aggregate flows
        [parent,distance1]=graphshortestpath2(netCostMatrix,i);
%         [parent,distance1]=dijkstra(netCostMatrix,i);
        
        [distance,ranking] = sort(distance1,'descend');
        parent=parent';
        distance=distance';
        
        %nodes store sum of all flow that arrive/departe at it
        F=zeros(totNodes,1);
        F(1:size(ODmatrix,2),1)=ODmatrix(i,:)';
        nStart=find(distance<inf,1,'first');
        if isfinite(nStart)
            for n=nStart:totNodes-1 
                nIndex = ranking(n);
                F(parent(nIndex))=F(parent(nIndex))+F(nIndex);
                originFlows(connectionMatrix(parent(nIndex),nIndex),i)=F(nIndex);
            end
        end
        
        if nargout>1
            %bush building
            for l=1:totLinks
                startNodeIndex = strN(l);
                endNodeIndex = endN(l);
                %             startNodeIndex = find([nodes.id]==links(l).startNode);
                %             endNodeIndex = find([nodes.id]==links(l).endNode);
                %

                %link is efficient according to topological ordering if the
                %distance to its end node is longer than to its start node
                if distance1(startNodeIndex)<distance1(endNodeIndex)
                    bush(l,i) = 1;
                else
                    bush(l,i) = 0;
                end
            end
        end
    end
end
end