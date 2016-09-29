function [originFlows,MFDP] =  redistributeFlows(PASPrim,PASSec,activeOrigins,originFlows,strN,connectionMatrix)

g1=zeros(length(activeOrigins),1);
g2=zeros(length(activeOrigins),1);


MFDP = inf;

g1=originFlows(PASPrim(1),activeOrigins);
incomingLinks=nonzeros(connectionMatrix(:,strN(PASPrim(end))));
temp=sum(originFlows(incomingLinks,activeOrigins),1);
for i=length(PASPrim)-1:-1:1
    g1=g1.*(originFlows(PASPrim(i+1),activeOrigins)./temp);
    incomingLinks=nonzeros(connectionMatrix(:,strN(PASPrim(i))));
    temp=sum(originFlows(incomingLinks,activeOrigins),1);
end
g1(isnan(g1))=eps;

g2=originFlows(PASSec(1),activeOrigins);
incomingLinks=nonzeros(connectionMatrix(:,strN(PASSec(end))));
temp=sum(originFlows(incomingLinks,activeOrigins),1);
for i=length(PASSec)-1:-1:1
    g2=g2.*(originFlows(PASSec(i+1),activeOrigins)./temp);
    g2(isnan(g2))=eps;
    incomingLinks=nonzeros(connectionMatrix(:,strN(PASSec(i))));
    temp=sum(originFlows(incomingLinks,activeOrigins),1);
end

rho=g1./(g1+g2);
 
f1=-min(originFlows(PASPrim,activeOrigins),[],1);
f1=-g1;
f2=min(originFlows(PASSec,activeOrigins),[],1);
f2=g2;

rho(rho==0)=eps;
rho(rho==1)=1-eps;

a=f1./rho+f2./(-rho+1);
b=-f1./rho-a.*rho;
c=f1;

if sum(b)^2<4*sum(a)*sum(c) || abs(sum(a))<10^-5
    r=-sum(c)/sum(b);
    dF = a*r^2+b*r+c; 
else
    det=sqrt(sum(b)^2-4*sum(a)*sum(c));
    r=(-sum(b)+det)/(2*sum(a));
    dF = a*r^2+b*r+c;
end
MFDP=max(abs(g1-r.*(g1+g2)));

if MFDP < 10^-10
    return;
end
if sum(dF)<10^-5
     if ~any(-dF(dF<0) > -f1(dF<0)) && ~any(dF(dF>0)>f2(dF>0))
        originFlows(PASPrim,activeOrigins)=originFlows(PASPrim,activeOrigins)+ones(length(PASPrim),1)*dF;
        originFlows(PASSec,activeOrigins)=originFlows(PASSec,activeOrigins)-ones(length(PASSec),1)*dF;
    end
end