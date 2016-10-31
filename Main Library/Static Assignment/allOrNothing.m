function [originFlows] = allOrNothing(odmatrix, nodes, links, travelCosts)
%All or nothing network loading
%
%SYNTAX
%   [flows] = ALLORNOTHING(odmatrix, nodes, links, travelCosts) 
%
%DESCRIPTION
%   Returns the flow on the network as a bush for each origin.
%   Flow is assigned only to the shortest path.
%   Shortest path is calculated using dijkstra's algorithm.
%
%INPUTS
%   odmatrix: static origin/destination matrix
%   nodes: table with all the nodes in the network
%   links: table with all the links in the network
%   travelCosts: link travel times

%Remember that every node is a potential source or sink
%odMatrix has a dimension of length(node) x length(node)
%and the flow is stored for each link
totNodes=size(nodes.x,1);
totLinks=size(links.capacity,1);

originFlows = zeros(totLinks,size(odmatrix,1));

%initialize
strN = links.fromNode;
endN = links.toNode;

%initialize cost matrix for the network
% netCostMatrix = Inf*ones(totNodes);
netCostMatrix=sparse(strN,endN,travelCosts,totNodes,totNodes);
linkPosition=sparse(strN,endN,1:length(travelCosts),totNodes,totNodes);
% netCostMatrix(sub2ind([totNodes,totNodes],strN,endN)) = travelCosts;

for i = 1:size(odmatrix,1)
    if sum(odmatrix(i,:)) > 0
        %node i is a source and the shortest path is calculated to each node
        parent = dijkstra(netCostMatrix, i);
        for j = 1:size(odmatrix,2)
            %next look at the used destinations for origin i
            if i==j || odmatrix(i,j)==0 
                %do nothing: interzonal traffic
                %do nothing: there is no flow from i towards j
            else
                %get the nodes that form the shortest path
                shortestPath = dijkstra_getpath(i,j,parent);
                if isempty(shortestPath) || size(shortestPath,2)==1
                    display(['no path available between ',int2str(i),' and ',int2str(j)]);
                else
                    %go over the links that connect the nodes of the
                    %shortest path and add the corresponding flow
                    for s=1:size(shortestPath,2)-1
                        [~,~,lnk] = find(linkPosition(shortestPath(s),shortestPath(s+1)));  
                        originFlows(lnk,i)=originFlows(lnk,i) + odmatrix(i,j);
                    end
                end
            end
        end
    end
end
end