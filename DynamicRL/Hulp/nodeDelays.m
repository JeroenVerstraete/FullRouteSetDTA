function NodeDelay = nodeDelays(flow,nodes,links,lightintersection)
totNodes = length(nodes.id);
totLinks = length(links.id);
strN = links.fromNode;
endN = links.toNode;
ConnectionMatrix=(repmat(endN,1,totLinks)==repmat(strN',totLinks,1));

strL = lightintersection.fromLink;
endL = lightintersection.toLink;
gpercent = lightintersection.greenTime./lightintersection.cycleTime;

percentMatrix=zeros(totLinks,totLinks);
percentMatrix((endL-1)*totLinks+strL)=gpercent;

flows=repmat(flow,1,1,totLinks);
flows=permute(flows,[1,3,2]);

capacity=repmat(links.capacity,1,totLinks,size(flow,2));

saturationdegree=flows./(repmat(percentMatrix,1,1,size(flow,2)).*capacity);
saturationdegree((repmat(percentMatrix,1,1,size(flow,2))==0)==1)=0;
saturationdegree=repmat(ConnectionMatrix,1,1,size(flow,2)).*saturationdegree;

NodeDelay= 10*saturationdegree+10; %seconden
NodeDelay((repmat(percentMatrix,1,1,size(flow,2))==0)==1)=0;

NodeDelay=NodeDelay/(60*60); %uren
end