function [TF,gap_dt,gap_dt_s] = stochasticTF_RL(nodes,links,destinations,simTT,cvn_up,dt,totT,rc_dt,rc_agg,theta)

totDest = length(destinations);
totNodes = length(nodes.id);
totLinks = length(links.id);
strN = links.fromNode;
endN = links.toNode;

if isempty(cvn_up)
    cvn_up=zeros(totLinks,totT+1,totDest);
end

updateTF = num2cell(ones(size(nodes.id,1),totT,totDest));
timeSteps = dt*[0:1:totT];
timeRC = rc_dt*[0:1:totT];
timeRC(timeRC>timeSteps(end))=[];

gap = zeros(totLinks,totT+1);
gap_dt = inf;
gap_s = zeros(totLinks,totT+1);
gap_dt_s = inf;
act_t = false(1,totT+1);
gVeh = floor(rc_dt/dt);

switch rc_agg
    case 'first'
        timeVeh = 0;
    case 'middle'
        timeVeh = rc_dt/2;
    case 'last'
        timeVeh = rc_dt;
    case 'Null'
        for d_index=1:totDest
            arr_map_d(d_index);
        end
        TF=[];
        return;
    case 'inst'
        for d_index=1:totDest
            d=destinations(d_index);
            netCostMatrix=sparse(endN,strN,simTT(:,1),totNodes,totNodes);
            [parent, ~] = dijkstra(netCostMatrix, d);
            for n=1:totNodes
                incomingLinks = find(endN==n);
                outgoingLinks = find(strN==n);
                TF{n,1,d_index}=zeros(max(1,length(incomingLinks)),length(outgoingLinks));
                TF{n,1,d_index}(:,endN(outgoingLinks)==parent(n))=1;
            end
        end
        gap = [];
        return;
        
end
tVeh = floor(timeVeh/dt);
fracVeh = timeVeh/dt-tVeh;

for d_index=1:totDest
%     fprintf('.');
    %use the arrival map order to compute the maximum perceived utility
    util_map = max_perc_util_d(d_index);
    
    %compute update of the turning fractions based on the utiliy values
    for n=1:totNodes
        next_rc=1;
        incomingLinks = find(endN==n);
        outgoingLinks = find(strN==n);
        
        if length(outgoingLinks)<=1
            %no update is required for a non divergent node
            for t=1:totT
                TF{n,t,d_index}=ones(max(1,length(incomingLinks)),max(1,length(outgoingLinks)));
            end
        else
            for t=1:totT
                %update all turning fractions within the route choice
                %interval by same value
                if timeSteps(t)>=timeRC(min(length(timeRC),next_rc))
                    next_rc = next_rc+1;
                    act_t(min(totT+1,t+tVeh))=true;
                    
                    %compute the turn probabilities
                    P=zeros(1,length(outgoingLinks));
                    for i=1:length(outgoingLinks)
                        l_out=outgoingLinks(i);
                        if isinf(util_map(l_out,end))
                            continue;
                        end
                        time=timeSteps(min(totT+1,t+tVeh))+simTT(l_out,min(totT+1,t+tVeh));
                        if time>=timeSteps(end)
                            P(i)=exp((timeSteps(end)-time+util_map(l_out,end))/theta);
                        else
                            t1 = min(totT+1,max(t+tVeh+1,1+floor(time/dt)));
                            t2 = min(totT+1,t1+1);
                            val = util_map(l_out,t1)+max(0,(1+time/dt-t1))*(util_map(l_out,t2)-util_map(l_out,t1));
                            P(i)=exp(val/theta);
                        end
                    end
                end
                
                %updating of the turning fractions
                TF{n,t,d_index}=zeros(max(1,length(incomingLinks)),length(outgoingLinks));
                if sum(P)==0
                    continue;
                end
                TF{n,t,d_index}=repmat(P/sum(P),max(1,length(incomingLinks)),1);
            end
        end
    end
    
%     gap_dt=gap_dt+sum(sum(gap(:,2:end).*diff(cvn_up(:,:,d_index),1,2)));
%     gap_dt_s=gap_dt_s+sum(sum(gap_s(:,2:end).*diff(cvn_up(:,:,d_index),1,2)));
end
% fprintf('\n');

%Nested function used for finding the maximum perceived utility
    function [util_map] = max_perc_util_d(d_index)
        d=destinations(d_index);
        util_map = zeros(totLinks,totT+1);
        %first do the last time slice
        
        %here static part of Recursive Logit
        
        %compute the deterministic part
        TT=(repmat(endN,1,totLinks)==repmat(strN',totLinks,1)).*repmat(simTT(:,end)',totLinks,1);
        v = -TT;
        %compute M (connectivity & travel time)
        M = exp(1/theta*v).*(TT>0);
        %compute b (destinations)
        b=zeros(totLinks,1);
        b(endN==d)=exp(-1/theta*(totT+1)*dt);
        %compute z (exponent of value function)
        z = (eye(length(b)) -M)\b;
        %compute utility map
        util_map(:,totT+1)=theta*log(z);
        
        %next do the others in upwind order
        for t=totT:-1:1
            for l=1:totLinks
                if any(endN(l)==destinations)
                    if endN(l)~=d
                        util_map(l,t)=-inf;
                    else
                        util_map(l,t)=-t*dt;
                    end
                    continue;
                end
                outgoingLinks = find(strN==endN(l));
                for l_out=outgoingLinks'
                    if isinf(util_map(l_out,end))
                        continue;
                    end
                    time=timeSteps(t)+simTT(l_out,t);
                    if time>=timeSteps(end)
                        util_map(l,t)=util_map(l,t)+exp((timeSteps(end)-time+util_map(l_out,end))/theta);
                    else
                        t1 = min(totT+1,max(t+1,1+floor(time/dt)));
                        t2 = min(totT+1,t1+1);
                        val = util_map(l_out,t1)+max(0,(1+time/dt-t1))*(util_map(l_out,t2)-util_map(l_out,t1));
                        util_map(l,t)=util_map(l,t)+exp(val/theta);
                    end
                end
                util_map(l,t) = theta*log(util_map(l,t));
            end
        end
    end
end
