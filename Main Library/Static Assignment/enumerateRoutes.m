function [incidenceODtoR, incidenceLtoR] = enumerateRoutes(ODmatrix,nodes,links,excludedODs,travelCosts,nRoutes)
%enumerate routes in a network
%
%SYNTAX
%   [routes, incidenceODtoR, incidenceLtoR] = enumerateRoutes(ODmatrix,nodes,links,excludedODs,costs,nRoutes,parallel)
%
%DESCRIPTION
%   returns the a number of routes, an incidence matrix for routes and
%   OD's and an incidence matrix for links and routes
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   excludedODs: OD for which no routes have to be calculated
%   costs: total travel cost on each link of the network
%   nRoutes: integer for the number of routes between each OD that have to
%   be calculated
%   parallel: use parallelization for optimizing calculation speed

%compute net cost matrix
totNodes = size(nodes.x,1);
totLinks = size(links.toNode,1);

strN=links.fromNode;
endN=links.toNode;

netCostMatrix=sparse(strN,endN,travelCosts,totNodes,totNodes);


%compute shortest k routes 
routes = {};
incidenceODtoR{size(ODmatrix,1),size(ODmatrix,2)} = [];
ODroutes{size(ODmatrix,1),size(ODmatrix,2)} = [];
  
for i = 1:size(ODmatrix,1)
    for j = 1:size(ODmatrix,2)
        if i==j || ODmatrix(i,j)==0
            %do nothing: interzonal traffic
            %do nothing: there is no flow from i towards j
        else
            tempCostMatrix = netCostMatrix;
            for l = 1:size(excludedODs,1);
                if ( excludedODs(l)~=i && excludedODs(l)~=j )
                    tempCostMatrix(excludedODs(l),:) = tempCostMatrix(excludedODs(l),:)*Inf;
                    tempCostMatrix(:,excludedODs(l)) = tempCostMatrix(:,excludedODs(l))*Inf;
                end
            end
            %calculate the k shortest paths
            [raw_routes] = kShortestPath(tempCostMatrix,i,j,nRoutes);
            for r = 1:size(raw_routes,2)
                ODroutes{i,j}.routes{r} = raw_routes{r};
            end
        end
    end
end


    
k = 1;
for i=1:size(ODmatrix,1)
      for j=1:size(ODmatrix,2)
            if isempty(ODroutes{i,j})
            else
                for r = 1:size(ODroutes{i,j}.routes,2)
                    routesNodes{k,1} = ODroutes{i,j}.routes{r};
                    routes{k}=struct('id',k,'links',[],'nodes',ODroutes{i,j}.routes{r},'fractions',[],'origin',nodes.id(i),'destination',nodes.id(j),'fraction',[]);
                    incidenceODtoR{i,j}=[incidenceODtoR{i,j},k];
                    k = k+1;
                end
            end
      end
end



%build incidenceLtoR
%incidenceODtoR can be built here!
%k = k+1;

%routes are in the form [origin node, node1, .., nodek, destination
%node]


incidenceLtoR = zeros(totLinks,size(routes,2));

%for each route build a column of the matrix
%converting from nodes to links

for i = 1:length(routes)
    currRoute = routesNodes{i};
    totNodes = size(currRoute,2);
    routelinks=[];
    for j = 1:(totNodes-1)
        linkid = find(strN==currRoute(j) & endN==currRoute(j+1));  
        incidenceLtoR(linkid,i) = 1;
        routelinks=[routelinks,linkid];
    end
    routes{i}=setfield(routes{i},'links',routelinks);
end



end
