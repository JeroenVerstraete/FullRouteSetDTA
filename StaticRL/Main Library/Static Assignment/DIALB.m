function [originFlows] = DIALB(ODmatrix,nodes,links,varargin)
%Dial: Algorithm B
%
%
%SYNTAX
%   [flows] = DIALB(ODmatrix,nodes,links)
%
%DESCRIPTION
%   returns the flow on each link in the deterministic user equilibrium as
%   calculated by the dial B algorithm
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.

%setup the output figure
h = figure;
semilogy(0,NaN);
start_time = cputime;

%Maximum number of iterations
maxIt = 200;

%Initialize the stop criterion
epsilon = 10^-6;

%Initialize parameters
PAR1=20;
PAR2=5;

%initilization
nOs = size(ODmatrix,1);
totLinks = size(links.length,1);
totNodes = size(nodes.x,1);

lengths = links.length;
speeds = links.freeSpeed;
capacities = links.capacity;
strN = links.fromNode;
endN = links.toNode;

%Initialize the iteration numbering
it = 0;

%Initialize the pas structes
gap = inf;
p_index = 0;
PAS = zeros(0,5);
PASc1 = zeros(0,1);
PASc2 = zeros(0,1);

%Initialize the connection matrix
connectionMatrix = sparse(strN,endN,[1:totLinks],totNodes,totNodes);

%Calculate costs
%note that the total flow on a link is the sum of the origin based flow
%on that link
alpha = 0.15;
beta = 4;
travelCosts = calculateCostBPR(alpha,beta,zeros(length(lengths),1),lengths,speeds,capacities);

%Initial Bush
[originFlows,bush] = initialLoading(ODmatrix, nodes, strN, endN,travelCosts,connectionMatrix);

%update costs
travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),lengths,speeds,capacities);

%convergence gap
[AEC,~,rc] = averageReducedCostGap(originFlows,travelCosts,strN,endN,ODmatrix,totNodes);
gap = AEC*sum(sum(ODmatrix));

%plot convergence in function of computation time
figure(h)
hold on
semilogy(cputime-start_time,gap,'r.')


%MAIN LOOP: iterate until convergence is reached or maximum number of
%iterations is reached
while it < maxIt && gap > epsilon
    it = it+1;
    
    %sort the origins according to convergence
    [~,nextOriginNodes] = sort(sum(rc.*(originFlows>0)),2,'descend');
    
    %go over all origins
    for originNode=nextOriginNodes(1:nOs)
        %if there is no departure flow at the origin than skip it
        if sum(originFlows(:,originNode))<=0
            continue;
        end
        %always start by checking the current bush if all its paths are
        %within the precision bound then look for a better one
        improved_bush=true;
        it_improved_bush = -1;
        
        
        %bush updating loops
        while improved_bush && it_improved_bush < PAR1
            %if a min/max path is found that is not within the precision
            %bound then equilibrate it by shifting flow
            it_shift_flows = 0;
            
            %shift flows within bush
            while it_shift_flows < PAR2
                it_shift_flows = it_shift_flows+1;
                
                %construct min/max subroutes
                [min_path,max_path,m,n,minDist,maxDist,within_bounds] = min_max_path_dial(originFlows,bush,originNode,strN,endN,travelCosts,connectionMatrix,totNodes);
                
                %stop shifting flow if all min/max paths are within the bounds of precision
                if within_bounds || same(min_path,max_path)
                    break;
                end
                
                %store the found subroute alternatives
                p = find(PASc1==m & PASc2==n);
                if isempty(p)
                    p_index=p_index+1;
                    p=p_index;
                    PAS{p,1}=m;
                    PASc1(p,1)=m;
                    PAS{p,2}=n;
                    PASc2(p,1)=n;
                    PAS{p,3}=min_path;
                    PAS{p,4}=max_path;
                    PAS{p,5}=originNode;
                    new_pas=true;
                else
                    new_pas=false;
                    if nnz(PAS{p,5}==originNode)==0
                        PAS{p,5}=[PAS{p,5},originNode];
                    end
                end
                
                %shift flows between subroute alternatives
                [originFlows]=shiftFlows(min_path,max_path,originNode,originFlows,lengths,speeds,capacities,new_pas);
                
                %update costs
                travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),lengths,speeds,capacities);
            end
            
            %Improve Bush
            [bush(:,originNode),improved_bush] = improveBush(strN, endN, travelCosts,originNode,bush(:,originNode),originFlows(:,originNode),minDist,maxDist,epsilon,connectionMatrix,totNodes);
            if improved_bush
                it_improved_bush = it_improved_bush + 1;
            end
        end
    end
    %update costs
    travelCosts = calculateCostBPR(alpha,beta,sum(originFlows,2),lengths,speeds,capacities);
    
    %convergence gap
    [AEC,~,rc] = averageReducedCostGap(originFlows,travelCosts,strN,endN,ODmatrix,totNodes);
    gap = AEC*sum(sum(ODmatrix));
    
    %plot convergence in function of computation time
    figure(h)
    hold on
    semilogy(cputime-start_time,gap,'r.')
end

originFlows_before = originFlows;

end_time = cputime;

tot_PAS=0;
for p_index=1:size(PAS,1)
    PAS{p_index,6}=abs(sum(travelCosts(PAS{p_index,3}))-sum(travelCosts(PAS{p_index,4})));
    %label PAS
    if ~any(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1))
        PAS{p_index,7} = -1; %unused PAS
    elseif any(all(originFlows(PAS{p_index,3},:)>0,1)&all(originFlows(PAS{p_index,4},:)>0,1))
        tot_PAS = tot_PAS+1;
        if PAS{p_index,6} > 10^-4
            PAS{p_index,7} = 1; %equilibrium PAS with problem...
            activeOrigins = find(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1));
            PAS{p_index,5} = activeOrigins;
        else
            PAS{p_index,7} = 1; %equilibrium PAS
            activeOrigins = find(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1));
            PAS{p_index,5} = activeOrigins;
        end
    else
        PAS{p_index,7} = 0; %used PAS
        activeOrigins = find(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1));
        PAS{p_index,5} = activeOrigins;
    end
end

for i=1:1000
    MFDP_max = 0;
    for p_index=1:size(PAS,1)
        if PAS{p_index,6}<10^-4 % PAS{p_index,7} == 1
            activeOrigins = PAS{p_index,5};
            PASPrim = PAS{p_index,3};
            PASSec = PAS{p_index,4};
            if length(activeOrigins)>1
                MFDP = inf;
                prop_it = 0;
                while MFDP >10^-10 && prop_it < 100
                    prop_it = prop_it + 1 ;
                    [originFlows,MFDP]=redistributeFlows(PASPrim,PASSec,activeOrigins,originFlows,strN,connectionMatrix);
                    MFDP_max = max(MFDP_max,MFDP);
                end
            end
        end
    end
    if MFDP_max < 10^-5
        break;
    end
end

%label PAS
tot_PAS=0;
for p_index=1:size(PAS,1)
    if ~any(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1))
        PAS{p_index,7} = -1; %unused PAS
    elseif any(all(originFlows(PAS{p_index,3},:)>0,1)&all(originFlows(PAS{p_index,4},:)>0,1))
        tot_PAS = tot_PAS+1;
        if PAS{p_index,6} > 10^-4
            PAS{p_index,7} = 1; %equilibrium PAS with problem...
            activeOrigins = find(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1));
            PAS{p_index,5} = activeOrigins;
        else
            PAS{p_index,7} = 1; %equilibrium PAS
            activeOrigins = find(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1));
            PAS{p_index,5} = activeOrigins;
        end
    else
        PAS{p_index,7} = 0; %used PAS
    end
end

%calculate free flow travel times costs
travelCostsFF = calculateCostBPR(alpha,beta,zeros(totLinks,1),lengths,speeds,capacities);

%POST processing of flows
MFDP_it = i;
MFDP_max = 0;
D_PAS = zeros(tot_PAS,totLinks);
usf_PAS = 0;
i=0;
for p_index=1:size(PAS,1)
    PAS{p_index,6}=abs(sum(travelCosts(PAS{p_index,3}))-sum(travelCosts(PAS{p_index,4})));
  
    %redistribute flows on subroutes that are in equilibrium according to proportional distribution
    if PAS{p_index,7} == 1
        activeOrigins = find(all(originFlows(PAS{p_index,3},:)>0,1)|all(originFlows(PAS{p_index,4},:)>0,1));
        PAS{p_index,5} = activeOrigins;
        PASPrim = PAS{p_index,3};
        PASSec = PAS{p_index,4};
        i=i+1;
        D_PAS(i,PASPrim)=-1;
        D_PAS(i,PASSec)=1;
        usf_PAS=usf_PAS+1;
        if length(activeOrigins)>1
            [originFlows,MFDP]=redistributeFlows(PASPrim,PASSec,activeOrigins,originFlows,strN,connectionMatrix);
             MFDP_max = max(MFDP_max,MFDP);
        end
    else
        if (sum(travelCosts(PAS{p_index,3}))-sum(travelCosts(PAS{p_index,4})))*(sum(travelCostsFF(PAS{p_index,3}))-sum(travelCostsFF(PAS{p_index,4})))<0
            usf_PAS=usf_PAS+1;
        end
    end
   
    %find active destinations
    it_o=1;
    PAS{p_index,8}=zeros(length(PAS{p_index,5}),0);
    for o=PAS{p_index,5}
        netCostMatrixSP = sparse(strN,endN,travelCosts.*bush(:,o).*(originFlows(:,o)>0),totNodes,totNodes);
        [~,distance_min]=graphshortestpath2(netCostMatrixSP,PAS{p_index,2});
        dest=find(isfinite(distance_min));
        dest=dest(dest<=length(ODmatrix));
        PAS{p_index,8}(it_o,1:nnz(ODmatrix(o,dest)>0)) = dest(ODmatrix(o,dest)>0);
        it_o=it_o+1;
    end
    if isempty(PAS{p_index,8})
        it_o=1;
        for o=PAS{p_index,5}
            netCostMatrixSP = sparse(strN,endN,travelCostsFF.*bush(:,o),totNodes,totNodes);
            [~,distance_min]=graphshortestpath2(netCostMatrixSP,PAS{p_index,2});
            dest=find(isfinite(distance_min));
            dest=dest(dest<=length(ODmatrix));
            PAS{p_index,8}(it_o,1:nnz(ODmatrix(o,dest)>0)) = dest(ODmatrix(o,dest)>0);
            it_o=it_o+1;
        end
    end
end

disp('------------------------------------------------------------');
disp(['tot eqPAS:',int2str(tot_PAS), ' (rnk ',num2str(rank(D_PAS)),' / usefull ',num2str(usf_PAS),' / used ',num2str(nnz([PAS{:,7}]==0)+tot_PAS),' / tot ',num2str(length(PAS)),')']);
display(['it (gap): ',num2str(it), ' (',num2str(gap),')']);
display(['MFDP_max ', num2str(MFDP_max),' (',num2str(MFDP_it),')']);
display(['maximum difference MEUE & ALGB ',num2str(max(max(abs(originFlows-originFlows_before))))]);
display(['total Time ALGB ',num2str(end_time-start_time), 's']);
display(['total Time ME ',num2str(cputime-end_time), 's']);

%Check for number of iteration
if it >= maxIt
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Converged in iteration ', num2str(it)]);
end
disp('------------------------------------------------------------');

end