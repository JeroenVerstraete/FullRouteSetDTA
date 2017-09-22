function costs = calculateDerivativeBPR(alpha,beta,flows,lengths,speeds,caps)
%Calculates the costs on a network according to the BPR curve
%
%SYNTAX
%   [costs] = CALCUOATECOSTBPR(alpha,beta,flows,lengths,speeds,caps) 
%
%DESCRIPTION
%   returns the costs on a network according to the BPR curve. Note that
%   the free flow travel time is calculated within the function.
%
%INPUTS
%   alpha: parameter that captures the additional travel time at capacity
%   beta: parameter that handles the slope of the increase in travel time
%   flows: total flow over each link
%   lengths: length of each link
%   speeds: maximum speed of each link
%   caps: capacity of each link
% beta=10;
costs = beta*lengths./speeds*60.*(alpha*(flows./caps).^(beta-1))./caps;