function [originFlows] = Dial(odmatrix, nodes, links, travelCosts, theta)
%Dails method for calculating a stochastic network loading
%
%
%SYNTAX
%   [originFlows] = Dial(ODmatrix, nodes, links, costs, theta)
%
%DESCRIPTION
%   Returns the flow on the network as a bush for each origin.
%   Flow is assigned to each link of the network according to Dial's
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

totNodes = size(nodes.x,1);
totLinks = size(links.toNode,1);

strN=links.fromNode;
endN=links.toNode;

originFlows = zeros(totLinks,size(odmatrix,1));


netCostMatrix=sparse(strN,endN,travelCosts,totNodes,totNodes);
linkPosition=sparse(strN,endN,1:length(travelCosts),totNodes,totNodes);


for origin = 1:size(odmatrix,1)
    if sum(odmatrix(origin,:)) > 0
        nodeWeights = zeros(totNodes,1);
        linkWeights = zeros(totLinks,1);
        nodeFlows = zeros(totNodes,1);
        nodeWeights(origin) = 1;
        
        %Compute dijkstra costs and store them in a cost-ordered structure
        [~, distance] = dijkstra(netCostMatrix, origin);
%         [~, distance] = graphshortestpath2(netCostMatrix, origin);
        
        costTree = nodes.id;
        costTree = [costTree,distance];
        
        %order costTree on column 2
        costTree = sortrows(costTree,2);
        
        %visit nodes in costTree starting from k=2
        k = 2;
        while k <= size(costTree,1)
            %nodeId = nodes(k,1); %get node Id
            nodeInd = costTree(k,1);
            %get which links enter node k
            [upNodes,~,inLinks] = find(linkPosition(:,nodeInd));
            nodeWeights(nodeInd) = 0; %?
            for j = 1:length(inLinks) %for each entering link D%j=j+1
                upNodeInd = upNodes(j); %get node id
                if (costTree(costTree(:,1)==upNodeInd,2) < costTree(k,2)) %if the cost of this entering node is less than the one we used to get here already
                    linkWeights(inLinks(j)) = nodeWeights(upNodeInd) * exp(-travelCosts(inLinks(j))*theta);
                    nodeWeights(nodeInd) = nodeWeights(nodeInd) + linkWeights(inLinks(j));
                else
                    linkWeights(inLinks(j)) = 0;
                end
            end
            k = k+1;
        end
        
        %Build flows vector, starting from destination(s) and backwards to the
        %origin (also nodeflows vector is used for dial)
        for destination = 1:size(odmatrix,2)
            nodeFlows(destination) = odmatrix(origin,destination);
        end
        
        k = totNodes; %beginning from n-1
        while k > 1
            nodeInd = costTree(k,1); %get node Id
            %get which links enter node k
            [upNodes,~,inLinks] = find(linkPosition(:,nodeInd));
            for j = 1:length(inLinks) %for each link entering
                upNodeInd = upNodes(j); %get node id
                if ( nodeWeights(nodeInd) == 0 )
                    continue;
                end
                originFlows(inLinks(j),origin) = originFlows(inLinks(j),origin) + nodeFlows(nodeInd)*linkWeights(inLinks(j))/nodeWeights(nodeInd);
                nodeFlows(upNodeInd) = nodeFlows(upNodeInd) + nodeFlows(nodeInd)*linkWeights(inLinks(j))/nodeWeights(nodeInd);
            end
            k = k-1;
        end
    end
end
end