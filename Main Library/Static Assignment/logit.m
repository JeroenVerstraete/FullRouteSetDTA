function [choiceP] = logit(cost,id,theta)
%logit choice model
%
%SYNTAX
%   [choiceP] = logit(costs,id,theta)
%
%DESCRIPTION
%   Returns the probability of choosing an alternative if the cost vector 
%   for all alternatives is given
%
%INPUTS
%   cost: cost of each of the alternatives
%   id: the alternative for which the probality is calculated
%   theta: the scale parameter of the logit model


totalCost = 0;
for i = 1:size(cost,2)
    totalCost = totalCost + exp(-(cost(i))*theta);
end

choiceP = exp(-(cost(id))*theta) / (totalCost);

return

end