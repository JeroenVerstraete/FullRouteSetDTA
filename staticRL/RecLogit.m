function [destinationFlows] = RecLogit(ODmatrix,nodes,links,travelCosts,mu,travelCostsInit,connectionMatrix)
b = -1.5;

con=connectionMatrix.*travelCosts;
v = b*con;
M = exp(1/mu*v).*(con>0);