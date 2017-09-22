function [bush_origin,improved_bush] = improveBush(strN, endN, travelCosts,originNode, bush_origin,origin_flows,minDist,maxDist,epsilon,connectionMatrix,totNodes)
%Create an improved Bush for Algorithm B
%
%SYNTAX
%   [bush_origin,improved_bush] = improveBush(nodes, links, travelCosts,originNode, bush_origin,origin_flows,minDist,maxDist,epsilon)
%
%DESCRIPTION
%   improves the bush by adding a link with a negative reduced cost. If
%   this link has a mirror (link going in the opposite direction) than it
%   will need to be removed.
%
%INPUTS
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   travelCosts: the cost for traversing each link
%   originNode: origin for which the bush is improved
%   bush_origin: the original bush
%   origin_flows: the flow bush comming from the origin
%   minDist: minimum distance labels in the bush
%   maxDist: maximum distance labels in the bush
%   epsilon: precision

improved_bush = false;
%create minimum path labels in the full network for the origin node
%[~, distance] = dijkstra_base(nodes,links,travelCosts, originNode);

totLinks = length(strN);

netCostMatrix = sparse(strN,endN,travelCosts,totNodes,totNodes);

[parent,distance]=graphshortestpath2(netCostMatrix,originNode);

minTree =  parent(endN)==strN;

if all(bush_origin(minTree))
    return;
end

%if these are within the bounds of the precision
if isempty(maxDist) || sum(abs(maxDist-distance)>epsilon)>0 %check this because not all nodes are on max path
    %     %next find a link that has negative reduced cost
    l_index=false(totLinks,1);
    l_index(~bush_origin)=minDist(strN(~bush_origin))+travelCosts(~bush_origin)<minDist(endN(~bush_origin));
    
    for l=find(l_index)'
        downNode = endN(l);
        upNode = strN(l);
        mirrorLinkIndex = connectionMatrix(downNode,upNode);
        improved_bush=true;
        bush_origin(l)=1;
        if mirrorLinkIndex~=0 %~isempty(mirrorLinkIndex) ||
            %if there is flow on the mirror report an error
            if origin_flows(mirrorLinkIndex)>0
                improved_bush=false;
                bush_origin(l)=0;
                %remove it from the bush
                %                 origin_flows(l)=origin_flows(mirrorLinkIndex);
                %                 origin_flows(mirrorLinkIndex)=0;
                %                 bush_origin(mirrorLinkIndex)=0;
                %                             display('there is flow on the mirror link while improving the bush...');
                %                             display('type dbquit to stop');
                %                             keyboard;
            else
                %remove it from the bush
                bush_origin(mirrorLinkIndex)=0;
            end
        end
        %add the cost efficient link to the bush
        if improved_bush
            return;
        end
    end
    
    %     %next find a link that is on the mintree but not in the bush
    l_index=false(totLinks,1);
    l_index(minTree)=~bush_origin(minTree);
        
    for l=find(l_index)'
        downNode = endN(l);
        upNode = strN(l);
        mirrorLinkIndex = connectionMatrix(downNode,upNode);
        improved_bush=true;
        bush_origin(l)=1;
        if mirrorLinkIndex~=0 %~isempty(mirrorLinkIndex) ||
            %if there is flow on the mirror report an error
            if origin_flows(mirrorLinkIndex)>0
                improved_bush=false;
                bush_origin(l)=0;
                %remove it from the bush
                %                 origin_flows(l)=origin_flows(mirrorLinkIndex);
                %                 origin_flows(mirrorLinkIndex)=0;
                %                 bush_origin(mirrorLinkIndex)=0;
                %                             display('there is flow on the mirror link while improving the bush...');
                %                             display('type dbquit to stop');
                %                             keyboard;
            else
                %remove it from the bush
                bush_origin(mirrorLinkIndex)=0;
            end
        end
        %add the cost efficient link to the bush
        if improved_bush
            return;
        end
    end
    
    %
end
end
