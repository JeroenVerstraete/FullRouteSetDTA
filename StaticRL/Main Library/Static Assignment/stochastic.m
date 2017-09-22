function [originFlows] = stochastic(ODmatrix,links,travelCosts,theta,incidenceODtoR,incidenceLtoR)
%Stochastic network loading
%
%SYNTAX
%   [originFlows] = stochastic(ODmatrix,nodes,links,travelCosts,mu,incidenceODtoR,incidenceLtoR)
%
%DESCRIPTION
%   Returns the flow on the network as a bush for each origin.
%   Flow is assigned stochastic over a number of routes
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   travelCosts: the cost for traversing each link
%   mu: parameter used for scaling the logit
%   incidenceODtoR: incidence matrix connection each route with an 
%   origin-destination pair
%   incidenceLtoR: incidence matrix connection each route with the used
%   links


%find OD pairs to be satisfied from ODmatrix

originFlows = zeros(size(links.toNode,1),size(ODmatrix,1));

for i = 1:size(ODmatrix,1)
    for j = 1:size(ODmatrix,2)
        %select only origins and destination that have flow running between
        %them
        if i==j || ODmatrix(i,j)==0 
            %do nothing: interzonal traffic
            %do nothing: there is no flow from i towards j
        else
           %For each OD couple determine which routes are available, compute the
           %logit probability and subdivide evenly the flow (each link of the route
           %will get flow*1/totRoutelinks)
           %r(i) %origin i
           %c(i) %destination i
           %incidenceODtoR must be tailored so that the different ODs come up
           %ordered by row
           routeNumbers = incidenceODtoR{i,j};
           nRoutes = size(routeNumbers,2);
           k = 1;
           routeCosts = zeros(1,nRoutes);
           routeFlows = zeros(1,nRoutes);
           temp = zeros(1,size(incidenceODtoR{i,j},2));
           for route = incidenceODtoR{i,j} %find costs for all routes             
               rlinks = incidenceLtoR(:,route)==1;
               routeCosts(k) = sum(travelCosts(rlinks));
               k = k + 1;
           end

           for k = 1:nRoutes %compute probabilities and flows
               prob = logit(routeCosts,k,theta);
               if isnan(prob)    
                   break;
               end
               routeFlows(k) = ODmatrix(i,j)*prob;
               originFlows(:,i) = originFlows(:,i) + routeFlows(k)*(incidenceLtoR(:,routeNumbers(k)));
           end
        end
    end
end

return

end