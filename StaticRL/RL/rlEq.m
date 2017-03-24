function [destinationFlows] = rlEq(ODmatrix,origins,destinations,links,mu,alpha,beta,travelCostsInit,destinationFlowsInit,betas,BoolFigure)
%Run main to execute this.
%
%Method of proportions for calculating stochastic user
%equilibrium using Recursive Logit
%
%SYNTAX
%   [destinationFlows] = MSArl(ODmatrix,nodes,links,mu,travelCostsInit,destinationFlowsInit)
%
%DESCRIPTION
%   returns the flow on each link in the stochastic user equilibrium as
%   calculated by the method of proportions combined with RL
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

%% Init variables
if(BoolFigure)
    h = figure;
    semilogy(0,NaN);
end
start_time = cputime;
maxIt = 2000;%2000; %Computation criterion

numD = size(destinations,2);
numO = size(origins,2);
numL = size(links,1);

%iteration number
it = 0; 
gap = inf;

% diagonal ODmatrix =0
%ODmatrix(logical(eye(size(ODmatrix)))) = 0; 

%% Init connectionmatrix/penalties

%rows and columns are links, init connectionmatrix
%1 if connection is possible
%UTurn is 1 if the connection is a Uturn
connectionMatrix = zeros(numL,numL);
UTurn = zeros(numL,numL);
for l=1:numL
    connectionMatrix(l,[links.fromNode]==links.toNode(l))=1; %check if connection is possible
    UTurn(l,[links.fromNode]==links.toNode(l)&[links.toNode]==links.fromNode(l))=1; %check if u-turn
end
UTurn=[UTurn;zeros(numO,numL)];

%check if hierarchy is present
if isempty((find(strcmp(links.Properties.VariableNames, 'level'))))
    %level1 is laagste level. snelweg heeft de hoogste level
    links=hierarchy(links);
end

%calculate number of levels it goes down in the hierarchy
levelsDown = zeros(numL,numL);
[linksFrom,linksTo]=find(connectionMatrix);
goingDown=links.level(linksFrom)>links.level(linksTo);
% verschil=links.level(linksFrom)-links.level(linksTo);
% levelsDown(linksFrom(goingDown)+numL*(linksTo(goingDown)-1))=verschil(goingDown); %linksFrom is rijnr, linksTo kolomnr => juiste element aanpassen
levelsDown(linksFrom(goingDown)+numL*(linksTo(goingDown)-1))=1;

levelsDown=[levelsDown;zeros(numO,numL)];

%% Init warm/cold start

%warm or cold start
if isempty(destinationFlowsInit)
    destinationFlows=zeros(numL,numD);
else
    destinationFlows=destinationFlowsInit;
end

%init travelCosts
if isempty(travelCostsInit)
    travelCosts = calculateCostBPR(alpha,beta,sum(destinationFlows,2)',[links.length]',[links.freeSpeed]',[links.capacity]');
else
    travelCosts = travelCostsInit;
end

%% init M en b
LL = zeros(numL,numL);

%aanvullen met 1/0 voor O en D
DL = zeros(numD,numL);
OL = zeros(numO,numL);
 for l=1:numO
     OL(l,origins(l)==links.fromNode)=1; % eerste numO links zijn de Origins, 
     %moet kost van de link zelf worden (en zal dus iedere iteratie aangepast worden!)
 end

connectionMatrix=[connectionMatrix;OL];

LD = zeros(numL,numD);
for l=1:numD
    LD(destinations(l)==links.toNode,l)=1; % eerste numD links zijn de Destinations
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

%% Loop
tic
while it < maxIt && gap>10^-3
    it = it+1;
        
    %Compute new flows via Recursive Logit  
    newDestinationFlows = RecLogit(ODmatrix,links,travelCosts,mu,connectionMatrix,UTurn,levelsDown,M,b,betas);

    %Calculate the update step
    update = (newDestinationFlows - destinationFlows);
    
    %Calculate new flows
    if(it==1)
        destinationFlows=update;
    else
        destinationFlows = destinationFlows + 0.5*update;%(1/(it^(2/3)))
%        destinationFlows = destinationFlows + (1/(it^(2/3)))*update;
    end

    %Convergence gap
    travelCosts = calculateCostBPR(alpha,beta,sum(destinationFlows,2)',[links.length]',[links.freeSpeed]',[links.capacity]');
    %calculateCostBPR(alpha,beta,sum(destinationFlows,2),links.length,links.freeSpeed,links.capacity)
    gap = sum(sum(abs(update)));
%     gap= max(max(abs(update)));
     
    %Plot convergence
    if(BoolFigure)
        figure(h)
        hold on
        semilogy(cputime-start_time,gap,'r.')
        drawnow;
    end
end
toc
%% Display
if(BoolFigure)
    title('Convergence RecLogit');
    xlabel('Time');
    ylabel('Gap');

    hold off
end

display(['it: ',num2str(it)]);
display(['gap (veh/h): ', num2str(gap)]);
display(['max update flow (veh/h): ',num2str(max(max(abs(update))))]);
display(['relative gap: ',num2str(gap/sum(sum(ODmatrix)))]);

%Check for number of iteration
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt)]);
else
    disp(['Converged in iteration ', num2str(it)]);
end

end