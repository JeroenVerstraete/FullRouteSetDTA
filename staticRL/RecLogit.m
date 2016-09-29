function [destinationFlows] = RecLogit(ODmatrix,nodes,links,travelCosts,mu,travelCostsInit,connectionMatrix)
numD = size(ODmatrix,2);
numO = size(ODmatrix,1);
numL = size(links,1);


%% Voorbereiding bepalen M
b = -1.5;
con=connectionMatrix.*repmat(travelCosts,size(connectionMatrix,1),1);
v = b*con;

%% Bepalen M
%M wordt (L+D+O)*(L+D+O) -> laatste O niet nodig -> (L+D+O)*(L+D)
%eerst het L*L stuk:
LL = exp(1/mu*v).*(con>0);

%aanvullen met 1/0 voor O en D
DL = zeros(numD,numL);
OL = zeros(numO,numL);
for l=1:numO
    OL(l,l==links.fromNode)=1; % elk node is een O/D
end
LD = zeros(numL,numD);
for l=1:numD
    LD(l==links.toNode,l)=1; % elk node is een O/D
end
DD = zeros(numD,numD);
OD = zeros(numO,numD); %heeft geen betekenis op het netwerk

LO = zeros(numL,numO);
DO = zeros(numD,numO);
OO = zeros(numO,numO);

M=[LL LD LO; DL DD DO; OL OD OO];

%% bepalen b
%b is (L+D)*D

LDb = zeros(numL,numD);
DDb = eye(numD,numD);
ODb = zeros(numO,numD);

b = [LDb;DDb;ODb];

%% bepalen Z (1 matrix voor alle bestemmingen)
z = (eye(length(b)) -M)\b;

%% probability en flow (bestemming afh)
destinationFlows=zeros(numL+numD+numO,4);
for des=1:numD

    P = zeros(numL+numD+numO,numL+numD+numO);
    for i=1:length(b)
        P(i,:)=M(i,:).*z(:,des)'/(M(i,:)*z(:,des));
    end

    P(isnan(P))=0;

    G=zeros(numL+numD+numO,1);
    G(numL+numD+1:numL+numD+numO)=ODmatrix(:,des);

    %link flows
    F = linsolve((eye(length(G))-P.'),G);
    destinationFlows(:,des)=F;
end
destinationFlows=destinationFlows(1:numL,:);
