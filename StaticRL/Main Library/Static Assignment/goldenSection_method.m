function [solution] = goldenSection_method(a,b,x1,x2,fx1,fx2,precision,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong)
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


    alpha = 0.15;
    beta = 4; 

    c = (-1 + sqrt(5)) / 2;
            
    %f(beta)
    if isempty(fx1)
        costsMaximumShiftLongX1 =  sum(calculateCostBPR(alpha,beta,flowsLong-x1*maximumShift,lengthsLong,speedsLong,capacitiesLong));
        costsMaximumShiftShortX1 = sum(calculateCostBPR(alpha,beta,flowsShort+x1*maximumShift,lengthsShort,speedsShort,capacitiesShort));   
        fx1 = abs(sum(costsMaximumShiftShortX1)-sum(costsMaximumShiftLongX1));
%         figure(1);
%         hold on;
%         plot(x1,fx1,'r.');
    end
    
    %fx
    if isempty(fx2)
        costsMaximumShiftLongX2 =  sum(calculateCostBPR(alpha,beta,flowsLong-x2*maximumShift,lengthsLong,speedsLong,capacitiesLong));
        costsMaximumShiftShortX2 = sum(calculateCostBPR(alpha,beta,flowsShort+x2*maximumShift,lengthsShort,speedsShort,capacitiesShort));   
        fx2 = abs(sum(costsMaximumShiftShortX2)-sum(costsMaximumShiftLongX2));
%         figure(1);
%         hold on;
%         plot(x2,fx2,'r.');
    end    
    
    if abs(a - b) <= precision %|| (fx1+fx2)/2 < 10^-18
        solution = (a + b) / 2;
        return;
    end
    
    if (fx1 < fx2) 
        b = x2;
        x2 = x1;
        fx2 = fx1;
        x1 = c*a + (1-c)*b;
        solution = goldenSection_method(a,b,x1,x2,[],fx2,precision,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong);
        return;
    else 
        a = x1;
        x1 = x2;
        x2 = (1-c)*a + c*b;
        solution = goldenSection_method(a, b, x1, x2,fx2 ,[],precision,maximumShift,flowsShort,flowsLong,lengthsShort,lengthsLong,speedsShort,speedsLong,capacitiesShort,capacitiesLong);
        return;
    end
end