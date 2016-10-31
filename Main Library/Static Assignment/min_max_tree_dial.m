function [distance_min,distance_max,parent_min,parent_max]= min_max_tree_dial(originFlow,bush,source,strN,endN,costs,totNodes)
%Find the minimum and maximum path in a bush for Algorithm B

%min path calculation
netCostMatrixSP = sparse(strN(bush>0),endN(bush>0),costs(bush>0),totNodes,totNodes);
[parent_min,distance_min]=graphshortestpath2(netCostMatrixSP,source);
parent_min(isnan(parent_min))=0;

%max path calculations
netCostMatrixSP = sparse(strN(bush>0&originFlow>0),endN(bush>0&originFlow>0),-costs(bush>0&originFlow>0),totNodes,totNodes);%+(-minimum_value+0.1)*(temp<0));
[parent_max,distance_max]=graphshortestpath2(netCostMatrixSP,source,'method','Bellman-Ford');

parent_max(isnan(parent_max))=0;
distance_max(distance_max==inf)=0;
distance_max=-distance_max;
 