function [originFlows] = Dial_F(odmatrix, nodes, links, orderN,travelCosts, theta)
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

linkPosition=sparse(strN,endN,1:length(travelCosts),totNodes,totNodes);


for origin = 1:size(odmatrix,1)
    if sum(odmatrix(origin,:)) > 0
        nodeWeights = zeros(totNodes,1);
        linkWeights = zeros(totLinks,1);
        nodeFlows = zeros(totNodes,1);
        nodeWeights(origin) = 1;
        
        costTree = orderN(:,origin);
       
        %visit nodes in costTree starting from k=2
        for k = 2:totNodes
            nodeInd = costTree(k,1);
            %get which links enter node k
            inLinks = nonzeros(linkPosition(:,nodeInd));
            nodeWeights(nodeInd) = 0; %?
            for l = inLinks' %for each entering link D%j=j+1
                upNodeInd = strN(l); %get node id
                linkWeights(l) = nodeWeights(upNodeInd) * exp(-travelCosts(l)*theta);
                nodeWeights(nodeInd) = nodeWeights(nodeInd) + linkWeights(l);
            end
        end
        
        %Build flows vector, starting from destination(s) and backwards to the
        %origin (also nodeflows vector is used for dial)
        for destination = 1:size(odmatrix,2)
            if origin~=destination
                nodeFlows(destination) = odmatrix(origin,destination);
            end
        end
        
        %beginning from n
        for  k = totNodes:-1:2
            nodeInd = costTree(k,1); %get node Id
            %get which links enter node k
            inLinks = nonzeros(linkPosition(:,nodeInd));
            for l = inLinks' %for each link entering
                upNodeInd = strN(l); %get node id
                if ( nodeWeights(nodeInd) == 0 )
                    continue;
                end
                originFlows(l,origin) = originFlows(l,origin) + nodeFlows(nodeInd)*linkWeights(l)/nodeWeights(nodeInd);
                nodeFlows(upNodeInd) = nodeFlows(upNodeInd) + nodeFlows(nodeInd)*linkWeights(l)/nodeWeights(nodeInd);
            end
            k = k-1;
        end
    end
end
end