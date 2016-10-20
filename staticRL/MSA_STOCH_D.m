function [flows] = MSA_STOCH_D(odmatrix,nodes,links,theta,BoolFigure)
%Method of successive averages for calculating deterministic user
%equilibrium
%
%SYNTAX
%   [flows] = MSA_exercise_D(ODmatrix,nodes,links)
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
if(BoolFigure)
    h = figure;
    semilogy(0,NaN);
end
start_time = cputime;

%Maximum number of iterations
maxIt = 100; 

%initilization
totLinks = size(links.toNode,1);
originFlows=zeros(totLinks,size(odmatrix,1));
nrOD= nnz(odmatrix);

%Initialize the iteration numbering
it = 0; 

%initialize the travel cost
%note that the total flow on a link is the sum of the origin based flow
%on that link
alpha = 0.15;
beta = 4;
travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),links.length,links.freeSpeed,links.capacity);

%initialize the gap function
gap = inf;

%MAIN LOOP: iterate until convergence is reached or maximum number of
%iterations is reached
tic
while it < maxIt && gap > 10^-4
    it = it+1;
    
    %Compute new flows via the implicit routing scheme of Dail (1971) 
    newOriginFlows = Dial(odmatrix,nodes,links,travelCosts,theta);
    tmp=newOriginFlows;
    tmp(tmp<0.01)=0;
    
    %calculate the update step
    update = (newOriginFlows - originFlows);
    
    %calculate new flows
    originFlows = originFlows + 1/it^(2/3)*update;
    
    %update costs
    travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),links.length,links.freeSpeed,links.capacity);
    
    %convergence gap
%     gap = sum(sum(abs(update)));
    gap= max(max(abs(update)));
    
        
    %plot convergence
    
    if(BoolFigure)    
        figure(h) 
        hold on
        if(nrOD==1 && nnz(tmp)==1)
            semilogy(cputime-start_time,gap,'ro')
        else
            semilogy(cputime-start_time,gap,'r.')
        end
        drawnow
    end
end
toc

if(BoolFigure)
    title({'Convergence Dial'});
    xlabel('Time');
    ylabel({'Gap'});
end

%Check for number of iterations until convergence
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Converged in iteration ', num2str(it)]);
end

%Return the total flow for every linnk (sum over all origines)
% flows = sum(originFlows,2);
flows=originFlows;

end