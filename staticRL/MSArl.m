function [destinationFlows] = MSArl(ODmatrix,links,mu,travelCostsInit,destinationFlowsInit)
%Run main
%Method of successive averages for calculating stochastic user
%equilibrium using Recursive Logit
%
%SYNTAX
%   [destinationFlows] = MSArl(ODmatrix,nodes,links,mu,travelCostsInit,destinationFlowsInit)
%
%DESCRIPTION
%   returns the flow on each link in the stochastic user equilibrium as
%   calculated by the method of successive averages combined with RL
%   network loading.
%
%INPUTS
%   ODmatrix: static origin destination matrix
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   mu: scaling parameter of the model similar to the scaling parameter in 
%   the logit model
%   Init parameters are for a warm start

%% Init
h = figure;
semilogy(0,NaN);
start_time = cputime;
maxIt = 2000; %Computation criterion

numD = size(ODmatrix,2);
numO = size(ODmatrix,1);
numL = size(links,1);


%rows and columns are links, init connectionmatrix
%1 if connection is possible
%p when it is a U-turn
p=10^1;
connectionMatrix = zeros(numL,numL);
for l=1:numL
    connectionMatrix(l,[links.fromNode]==links.toNode(l))=1; %check if connection is possible
    connectionMatrix(l,([links.fromNode]==links.toNode(l)).*[links.toNode]==links.fromNode(l))=p; %check if u-turn
end

it = 0; %iteration number;
gap = inf;

cm=hsv(64);
c=cm(ceil(rand*63),:);

%warm or cold start
if isempty(destinationFlowsInit)
    destinationFlows=zeros(numL,numD);
else
    destinationFlows=destinationFlowsInit;
end


alpha = 0.15;
beta = 4;
if isempty(travelCostsInit)
    travelCosts = calculateCostBPR(alpha,beta,sum(destinationFlows,2)',[links.length]',[links.freeSpeed]',[links.capacity]');
else
    travelCosts = travelCostsInit;
end

ODmatrix(logical(eye(size(ODmatrix)))) = 0; % diagonaal ODmatrix =0

%% init M en b
LL = zeros(numL,numL);

%aanvullen met 1/0 voor O en D
DL = zeros(numD,numL);
OL = zeros(numO,numL);
for l=1:numO
    OL(l,l==links.fromNode)=1; % eerste numO links zijn de Origins
end
LD = zeros(numL,numD);
for l=1:numD
    LD(l==links.toNode,l)=1; % eerste numD links zijn de Destinations
end
DD = zeros(numD,numD);
OD = zeros(numO,numD); %heeft geen betekenis op het netwerk

LO = zeros(numL,numO);
DO = zeros(numD,numO);
OO = zeros(numO,numO);

M=[LL LO LD; OL OO OD ; DL DO DD];
M=sparse(M);

%b is (L+O+D)*D

LDb = zeros(numL,numD);
DDb = eye(numD,numD);
ODb = zeros(numO,numD);

b = [LDb;ODb;DDb];
b=sparse(b);

%% loop

while it < maxIt && gap>10^-3
    it = it+1;
        
    %Update costs
    %note that the total flow on a link is the sum of the origin based flow
    %on that link
    %Compute new flows via Recursive Logit
        
    newDestinationFlows = RecLogit(ODmatrix,links,travelCosts,mu,connectionMatrix,M,b);

    %calculate the update step
    update = (newDestinationFlows - destinationFlows);
    
    %calculate new flows
    destinationFlows = destinationFlows + (1/(it^(2/3)))*update;%

    %convergence gap
    travelCosts = calculateCostBPR(alpha,beta,sum(destinationFlows,2)',[links.length]',[links.freeSpeed]',[links.capacity]');
    gap = sum(sum(abs(update)));
    %gap = reducedCostGap(originFlows,travelCosts,links,nodes);
     
    %plot convergence
    figure(h)
    hold on
    semilogy(cputime-start_time,gap,'r.')
%     plot(cputime-start_time,log10(gap),'.','MarkerEdgeColor',c,'MarkerFaceColor',c,'MarkerSize',10);
    %plot(it,log10(gap),'.','MarkerEdgeColor',c,'MarkerFaceColor',c,'MarkerSize',10);
end

%% display
hold off

display(['it: ',num2str(it)]);
display(['gap (veh/h): ', num2str(gap)]);
display(['max update flow (veh/h): ',num2str(max(max(abs(update))))]);
display(['relative gap: ',num2str(gap/sum(sum(ODmatrix)))]);
% display(['total Time ALG Recursive Logit ',num2str(cputime-start_time), 's']);

%Check for number of iteration
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Converged in iteration ', num2str(it)]);
end

end