function [destinationFlows] = RecLogit(ODmatrix,links,travelCosts,mu,connectionMatrix,UTurn,M,b)
numD = size(ODmatrix,2);
numO = size(ODmatrix,1);
numL = size(links,1);

%% Voorbereiding bepalen M
beta_tt = -1.5;
beta_Ut = -10;
TT=connectionMatrix.*repmat(travelCosts,size(connectionMatrix,1),1);
v = beta_tt*TT+beta_Ut*UTurn;


%% Bepalen M
%M wordt (L+O+D)*(L+O+D)
%enkel LL moet iedere iteratie veranderd worden:
LL = exp(1/mu*v).*(TT>0);

M(1:numL,1:numL)=LL;

%% bepalen Z (1 matrix voor alle bestemmingen)
z = (eye(length(b)) -M)\b;
% z(z<10^-3)=0;

%% probability en flow (bestemming afh)
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
    %link flows
    F = (eye(length(G))-P.')\G;
    destinationFlows(:,des)=F;
end
destinationFlows=destinationFlows(1:numL,:);
