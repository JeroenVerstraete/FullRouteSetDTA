function [min_path,max_path,m,n,minDist,maxDist,within_bounds] = min_max_path_dial(originFlows,bush,originNode,strN,endN,travelCosts,connectionMatrix,totNodes)
%Find the minimum and maximum path in a bush for Algorithm B
%
%SYNTAX
%   [min_path,max_path,minDist,maxDist,within_bounds] = min_max_path_dial(originFlows,bush,originNode,nodes,links,travelCosts,epsilon)
%
%DESCRIPTION
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

%initialize the min/max paths
min_path=[];
max_path=[];
m=[];
n=[];

%Build min/max threes
[minDist,maxDist,parent_min,parent_max]= min_max_tree_dial(originFlows(:,originNode),bush(:,originNode),originNode,strN,endN,travelCosts,totNodes);

%find the largest difference between minimum and maximum distance
%if more then one is found (within bounds of 10^-14) take the one closest
%to the origin
[~,topOr]=sort(minDist);
i=0;
diff=0;
while diff<10*eps && i<10
    [diff,n]=max(round(10^(10+i)*(maxDist(topOr)-minDist(topOr)))/10^(10+i));%9
     i=i+1;
end

n=topOr(n);

%if difference is within precision bounds then there are no min/max paths
%to update
if diff < 10*eps
    within_bounds=true;
    return;
else
    within_bounds=false;
end

%construct the paths from origin to merge node (n)
n_temp = n;
n_temp_min = zeros(length(connectionMatrix),1);
i=1;
while n_temp~=originNode
    n_temp = parent_min(n_temp);
    i=i+1;
    n_temp_min(n_temp)=i;
end

n_temp = n;
n_temp_max = zeros(length(connectionMatrix),1);
i=1;
while n_temp~=originNode
    n_temp = parent_max(n_temp);
    i=i+1;
    n_temp_max(n_temp)=i;
end

%find all the common nodes in these paths
commonNodes_temp=find(n_temp_max>0&n_temp_min>0);
%look for the diverge node closest to n
[val_m_max,ind_m]=min(n_temp_max(commonNodes_temp));
m_temp = commonNodes_temp(ind_m);
m=m_temp;

%add merge node
n_temp_min(n)=1;
n_temp_max(n)=1;

%remove nodes before diverge (including the diverge)
min_path_nodes_temp = find(n_temp_min<n_temp_min(m_temp) & n_temp_min>0);
[~,pos_min] = sort(n_temp_min(min_path_nodes_temp),1,'descend');
max_path_nodes_temp = find(n_temp_max<val_m_max & n_temp_max>0);
[~,pos_max] = sort(n_temp_max(max_path_nodes_temp),1,'descend');

%construct the paths from m to n
[~,~,min_path_temp]=find(connectionMatrix(parent_min(min_path_nodes_temp)+(min_path_nodes_temp-1)*totNodes));
min_path=min_path_temp(pos_min)';
[~,~,max_path_temp]=find(connectionMatrix(parent_max(max_path_nodes_temp)+(max_path_nodes_temp-1)*totNodes));
max_path=max_path_temp(pos_max)';
