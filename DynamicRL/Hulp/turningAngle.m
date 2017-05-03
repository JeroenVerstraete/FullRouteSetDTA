function [Left,Right] = turningAngle(nodes,links)

straightAngle=30;
uTurnAngle=10;

totNodes = length(nodes.id);
totLinks = length(links.id);
strN = links.fromNode;
endN = links.toNode;

vectors=[nodes.xco(endN)-nodes.xco(strN),nodes.yco(endN)-nodes.yco(strN)];
vectors=vectors./sqrt(diag(vectors*vectors')); %normalizeren


angles= atan2d( vectors(:,1).*vectors(:,2)'-vectors(:,2).*vectors(:,1)',vectors(:,1).*vectors(:,1)'+vectors(:,2).*vectors(:,2)');
ConnectionMatrix=(repmat(endN,1,totLinks)==repmat(strN',totLinks,1));
angles=angles.*ConnectionMatrix;

Left=zeros(totLinks,totLinks);
Right=zeros(totLinks,totLinks);
Left(and(angles>straightAngle,angles<180-uTurnAngle))=1;
Right(and(angles<-straightAngle,angles>-180+uTurnAngle))=1;
Left=sparse(Left);
Right=sparse(Right);
end