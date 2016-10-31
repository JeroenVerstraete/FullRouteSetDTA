function [destinationFlows] = RecLogit(ODmatrix,links,travelCosts,mu,connectionMatrix,UTurn,levelsDown,M,b,betas)
% Gives the destinationflows according to the Recursive Logit

%% Init variables
numD = size(ODmatrix,2);    %number of Destinations
numO = size(ODmatrix,1);    %number of Origins
numL = size(links,1);       %number of Links

%% Calculate v
if size(betas)~=3 
    beta_tt = -1.5;             %TravelTimes
    beta_Ut = -100;             %Uturn
    beta_hierarchy = -1;        %hierarchy
else
    beta_tt = betas(1);             %TravelTimes
    beta_Ut = betas(2);             %Uturn
    beta_hierarchy = betas(3);      %hierarchy
end
    
TT=connectionMatrix.*repmat(travelCosts,size(connectionMatrix,1),1);
v = beta_tt*TT+beta_Ut*UTurn+beta_hierarchy*levelsDown;
% v=abs(v);

% Cost from link you are going on to!

%% Calculate M
%M dimensions: (L+O+D)*(L+O+D)
%only LL and OL are differend every iteration, [LL;OL]=LOL
LOL = exp(1/mu*v).*(TT>0);
M(1:numL+numO,1:numL)=LOL;

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
