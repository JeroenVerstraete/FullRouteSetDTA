function [TurnFlow] = NodeModel(nbIncomingLinks,nbOutgoingLinks,sendingFlow,turningFractions,receivingFlow,incomingLinks_capacity)
%#codegen
%coder.inline('never');

%Node model
%
%SYNTAX
%   [flowIncomingLinks,flowOutgoingLinks] = NodeModel(incomingLinks,outgoingLinks,sendingFlow,turningFractions,receivingFlow,caps,timeInterval)
%
%DESCRIPTION
%   returns the transfer flow over a node
%
%INPUTS
%   incomingLinks: id of the incoming links
%   outgoingLinks: id of the outgoing links
%   sendingFlow: the sending flow
%   turningFractions: turning fractions at the node
%   receivingFlow: the receiving flow
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   timeInterval: updating interval

%STATIC INITIALIZATION WITH MAX 7 IN- AND OUTGOING LINKS

%check also here dynamic initialization based on actual number of incoming
%and outgoing links

%initialize
adjustedReceivingFlow = receivingFlow; % adjusted receiving flow
competingLinks = repmat(sendingFlow,1,nbOutgoingLinks).*turningFractions>0;   % competing links
activeOutLinks = any(competingLinks,1);% active outgoing links

orientedCap = turningFractions.*(incomingLinks_capacity*ones(1,nbOutgoingLinks));
TurnFlow = zeros(nbIncomingLinks,nbOutgoingLinks);

while any(activeOutLinks)
    alpha=adjustedReceivingFlow./sum(orientedCap.*competingLinks,1)';
    alpha(~activeOutLinks)=inf;
    [alpha_min,j]=min(alpha);
    if any(sendingFlow(competingLinks(:,j))<=alpha_min*incomingLinks_capacity(competingLinks(:,j)))
        for a=1:nbIncomingLinks
            if competingLinks(a,j)
                if sendingFlow(a)<=alpha_min*incomingLinks_capacity(a)
                    for b=1:nbOutgoingLinks
                          if activeOutLinks(b)
                            TurnFlow(a,b)=turningFractions(a,b)*sendingFlow(a);
                            adjustedReceivingFlow(b)=adjustedReceivingFlow(b)-TurnFlow(a,b);
                            competingLinks(a,b)=false;
                            if all(~competingLinks(:,b))
                                activeOutLinks(b)=false;
                            end
                        end
                    end
                end
            end
        end
    else
        for a=1:nbIncomingLinks
            if competingLinks(a,j)
                for b=1:nbOutgoingLinks
                   if activeOutLinks(b)
                        TurnFlow(a,b)=alpha_min*orientedCap(a,b);
                        adjustedReceivingFlow(b)=adjustedReceivingFlow(b)-TurnFlow(a,b);
                        competingLinks(a,b)=false;
                        if all(~competingLinks(:,b))
                            activeOutLinks(b)=false;
                        end
                    end
                end
            end
        end
        activeOutLinks(j)=false;
    end
end
end