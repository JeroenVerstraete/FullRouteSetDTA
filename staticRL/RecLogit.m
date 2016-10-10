function [destinationFlows] = RecLogit(ODmatrix,links,travelCosts,mu,connectionMatrix,UTurn,levelsDown,M,b)
% Gives the destinationflows according to the Recursive Logit
%% Init variables
numD = size(ODmatrix,2);    %number of Destinations
numO = size(ODmatrix,1);    %number of Origins
numL = size(links,1);       %number of Links

%% Calculate v
beta_tt = -1.5;             %TravelTimes
beta_Ut = -100;             %Uturn
beta_hierarchy = -5;        %hierarchy

TT=connectionMatrix.*repmat(travelCosts,size(connectionMatrix,1),1);
v = beta_tt*TT+beta_Ut*UTurn+beta_hierarchy*levelsDown;

%% Calculate M
%M dimensions: (L+O+D)*(L+O+D)
%only LL is differend every iteration
LL = exp(1/mu*v).*(TT>0);
M(1:numL,1:numL)=LL;

%% bepalen Z (1 matrix for all destinations)
z = (eye(length(b)) -M)\b;

%% probability and flow (origin dependent)
destinationFlows=zeros(numL+numO+numD,numD);
P = zeros(numL+numO+numD,numL+numO+numD);
G=zeros(numL+numO+numD,1);
for des=1:numD   

    for i=1:numL+numO
        P(i,:)=M(i,:).*z(:,des)'/(M(i,:)*z(:,des));
    end
    
    P(isnan(P))=0;
    
    G(numL+1:numL+numO)=ODmatrix(:,des);
    G=sparse(G);
    F = (eye(length(G))-P.')\G;
    destinationFlows(:,des)=F;
end
destinationFlows=destinationFlows(1:numL,:); %only interested in Links to somewhere
