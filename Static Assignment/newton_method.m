function [solution,sol_it] = newton_method(x,maxIt,it,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong)
%Recursive golden section algorithm to find the flow shift that equilibrates the
%costs between two PAS
%
%
%SYNTAX
%   [solution] = goldenSection_TAPAS(a,b,x1,x2,precision,shortSegmentLinks,longSegmentLinks,maximumShift,flows)
%
%DESCRIPTION
%   returns the relative flow shift that equilibrates the costs between two PAS
%
%INPUTS
%   a
%   b
%   x1
%   x2
%   precision
%   shortSegmentLinks
%   longSegmentLinks
%   maximumShift
%   flows

it=it+1;
error = false;

alpha = 0.15;
beta = 4;

costsMaximumShiftLongX =  sum(calculateCostBPR(alpha,beta,flowsLong-x*maximumShift,lengthsLong,speedsLong,capacitiesLong));
costsMaximumShiftShortX = sum(calculateCostBPR(alpha,beta,flowsShort+x*maximumShift,lengthsShort,speedsShort,capacitiesShort));
derMaximumShiftLongX =  -sum(calculateDerivativeBPR(alpha,beta,flowsLong-x*maximumShift,lengthsLong,speedsLong,capacitiesLong))*maximumShift;
derMaximumShiftShortX = sum(calculateDerivativeBPR(alpha,beta,flowsShort+x*maximumShift,lengthsShort,speedsShort,capacitiesShort))*maximumShift;

fx = sum(costsMaximumShiftLongX)-sum(costsMaximumShiftShortX);
gx = sum(derMaximumShiftLongX)-sum(derMaximumShiftShortX);


% figure(1);
% hold on;
% plot(x,fx,'g.',x,gx,'b.');

x_new = min(max(0,x-fx/gx),1);

if abs(fx/gx) <= eps*1000 || abs(fx) <= eps*1000
    solution = x;
    sol_it = it;
    return;
end

if  it > maxIt
    solution = x;
    sol_it = it;
    return
end

[solution,sol_it] =  newton_method(x_new,maxIt,it,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong);
   
end