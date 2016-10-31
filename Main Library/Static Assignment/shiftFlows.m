function [originFlows,regime] =  shiftFlows(shortSegmentLinks,longSegmentLinks,relevantOrigines,originFlows,lengths,speeds,capacities,new_pas)
%Shift flow between PAS
%
%
%SYNTAX
%   [newOrigineFlows,PAS] =  shiftFlows(PAS,origineFlows,links)
%
%DESCRIPTION
%   returns the resulting origin flow after shifting flow on a PAS to
%   equilibrate costs on that PAS
%
%INPUTS
%   PAS: paires of alternative segments
%   originFlows: flow on the network as a bush for each origin
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%
% newOrigineFlows = originFlows;

alpha = 0.15;
beta = 4;

longSegmentCost =  sum(calculateCostBPR(alpha,beta,sum(originFlows(longSegmentLinks,:),2),lengths(longSegmentLinks),speeds(longSegmentLinks),capacities(longSegmentLinks)));
shortSegmentCost =  sum(calculateCostBPR(alpha,beta,sum(originFlows(shortSegmentLinks,:),2),lengths(shortSegmentLinks),speeds(shortSegmentLinks),capacities(shortSegmentLinks)));
%check for the correct shortest length segment
temp_region = false;
if shortSegmentCost>longSegmentCost
    temp=shortSegmentLinks;
    shortSegmentLinks = longSegmentLinks;
    longSegmentLinks = temp;
    temp_region = true;
end
maximumShift = sum(min(originFlows(longSegmentLinks,relevantOrigines),[],1));


% flows_temp = flows;
% flows_temp(longSegmentLinks)=flows_temp(longSegmentLinks)-maximumShift;
% travelCosts = calculateCost_BPR_ICA(alpha,beta,flows_temp,[links.length]',[links.freeSpeed]',[links.capacity]',non_seperable_connections);
costsMaximumShiftLong =  sum(calculateCostBPR(alpha,beta,sum(originFlows(longSegmentLinks,:),2)-maximumShift,lengths(longSegmentLinks),speeds(longSegmentLinks),capacities(longSegmentLinks)));

% flows_temp = flows;
% flows_temp(shortSegmentLinks)=flows_temp(shortSegmentLinks)+maximumShift;
% travelCosts = calculateCost_BPR_ICA(alpha,beta,flows_temp,[links.length]',[links.freeSpeed]',[links.capacity]',non_seperable_connections);
costsMaximumShiftShort = sum(calculateCostBPR(alpha,beta,sum(originFlows(shortSegmentLinks,:),2)+maximumShift,lengths(shortSegmentLinks),speeds(shortSegmentLinks),capacities(shortSegmentLinks)));

if maximumShift==0
    %if no shift is possible the PAS is nolonger usefull
    regime=0;
elseif costsMaximumShiftShort<costsMaximumShiftLong
    %if shortestSegment is still less costly then the
    %longestSegment then implement the maximum flow shift
    originFlows(shortSegmentLinks,relevantOrigines) = originFlows(shortSegmentLinks,relevantOrigines)+ones(length(shortSegmentLinks),1)*min(originFlows(longSegmentLinks,relevantOrigines),[],1);
    originFlows(longSegmentLinks,relevantOrigines) = originFlows(longSegmentLinks,relevantOrigines)-ones(length(longSegmentLinks),1)*min(originFlows(longSegmentLinks,relevantOrigines),[],1);
    originFlows(longSegmentLinks(originFlows(longSegmentLinks,relevantOrigines)<eps*100),relevantOrigines) = 0;
    if temp_region
        regime=-1;
    else
        regime=1;
    end
else
    %do a line search (newton method or golden section search in this case)
    
    flowsShort=sum(originFlows(shortSegmentLinks,:),2);
    flowsLong=sum(originFlows(longSegmentLinks,:),2);
    lengthsShort=lengths(shortSegmentLinks);
    lengthsLong=lengths(longSegmentLinks);
    speedsShort=speeds(shortSegmentLinks);
    speedsLong=speeds(longSegmentLinks);
    capacitiesShort=capacities(shortSegmentLinks);
    capacitiesLong=capacities(longSegmentLinks);
    
    %     x1 = goldenSection_method(a,b,x1,x2,[],[],precision,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong);
    
    maxIt = 100;
    x_start = abs(longSegmentCost-shortSegmentCost)/(abs(longSegmentCost-shortSegmentCost)-costsMaximumShiftLong+costsMaximumShiftShort);
    
%     if new_pas
%     x=x_start;
%     it=0;
%     else
    [x,it] = newton_method(x_start,maxIt,0,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong);
%     end
    %
    if it>maxIt
        a = 0;
        b = 1;
        c = (-1 + sqrt(5)) / 2;
        x1 = c*a + (1-c)*b;
        x2 = (1-c)*a + c*b;
        precision = eps;
        x = goldenSection_method(a,b,x1,x2,[],[],precision,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong);
    end
    
    %     flows =sum(originFlows,2);
    %     options=[];
    %    options = optimset('GradObj','on','Hessian','off','Display','iter','TolFun',10^-15,'TolCon',10^-15,'TolX',10^-15,'MaxIter',10);
    %options = optimset('Algorithm','active-set','Display','off','TolFun',10^-10,'TolCon',10^-15,'TolX',10^-15);
    %     x1 = fmincon(@(xA)f_x_2_PAS(xA,shortSegmentLinks,longSegmentLinks,maximumShift,flows,lengths,speeds,capacities),0,[],[],[],[],0,1,[],options);
    %      options = optimset('Display','off','TolFun',1e-15,'TolCon',1e-15,'TolX',1e-15,'MaxIter',20);
    %      x = fminbnd(@(xA)f_x_2_PAS(xA,shortSegmentLinks,longSegmentLinks,maximumShift,flows,lengths,speeds,capacities),0,1,options);
    
    if temp_region
        regime=-2;
    else
        regime=2;
    end
    
    if x>10^-14;
        originFlows(shortSegmentLinks,relevantOrigines) = originFlows(shortSegmentLinks,relevantOrigines)+x*ones(length(shortSegmentLinks),1)*min(originFlows(longSegmentLinks,relevantOrigines),[],1);
        originFlows(longSegmentLinks,relevantOrigines) = originFlows(longSegmentLinks,relevantOrigines)-x*ones(length(longSegmentLinks),1)*min(originFlows(longSegmentLinks,relevantOrigines),[],1);
    else
        regime=0;
    end
    
end
end