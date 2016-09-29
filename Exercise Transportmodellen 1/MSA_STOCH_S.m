function [flows] = MSA_exercise_S(odmatrix,nodes,links,theta)
%Method of successive averages for calculating deterministic user
%equilibrium
%
%SYNTAX
%   [flows] = MSA_exercise_S(ODmatrix,nodes,links)
%
%DESCRIPTION
%   returns the flow on each link in the stochastic user equilibrium as
%   calculated by the method of successive averages
%
%INPUTS
%   odmatrix: static origin/destination matrix
%   nodes: table with all the nodes in the network.
%   links: table with all the links in the network
%   theta: stochastic distribution parameter (related to the value of time) 

%setup the output figure
h = figure;
semilogy(0,NaN);
start_time = cputime;

%Maximum number of iterations
maxIt = 20; 

%initilization
totLinks = size(links.toNode,1);
originFlows=zeros(totLinks,size(odmatrix,1));

%Initialize the iteration numbering
it = 0; 

%initialize the travel cost
%note that the total flow on a link is the sum of the origin based flow
%on that link
alpha = 0.15;
beta = 4;
travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),links.length,links.freeSpeed,links.capacity);

%initialize the different route alternatives
[incidenceODtoR, incidenceLtoR] = enumerateRoutes(odmatrix,nodes,links,[],travelCosts,5);

%initialize the gap function
gap = inf;

%MAIN LOOP: iterate until convergence is reached or maximum number of
%iterations is reached
while it < maxIt && gap > 10^-8 
    it = it+1;
       
    %Compute new flows via logit distribution over all initialized routes  
    newOriginFlows = stochastic(odmatrix, links, travelCosts,theta,incidenceODtoR,incidenceLtoR);
    
    %calculate the update step
    update = (newOriginFlows - originFlows);
    
    %calculate new flows
    originFlows = originFlows + 1/it*update;
    
    %update costs
    travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),links.length,links.freeSpeed,links.capacity);
        
    %convergence gap
    gap = sum(sum(abs(update)));
        
    %plot convergence in function of computation time
    figure(h) 
    hold on
    semilogy(cputime-start_time,gap,'r.')
end

%Check for number of iterations until convergence
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Convergence reached in iteration ', num2str(it)]);
end

%Return the total flow for every link (sum over all origines)
flows = sum(originFlows,2);

end