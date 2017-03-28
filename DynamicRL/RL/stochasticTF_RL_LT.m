function [TF,gap_dt,gap_dt_s] = stochasticTF_RL_LT(nodes,links,destinations,simTT,cvn_up,dt,totT,rc_dt,rc_agg,mu,UTurn,Hierarchy)
%shortest path utility map


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
gap_dt = 0;
gap_s = zeros(totLinks,totT+1);
gap_dt_s = 0;
act_t = false(1,totT+1);
gVeh = floor(rc_dt/dt);

%betas
betaUturn=0;
betaTT=-1;
betaHierarchy=0;

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
    %use the arrival map order to compute the maximum perceived utility
    util_map = max_perc_util_d(d_index);
    if nargout>1
        arr_map_d(d_index);
    end
    
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
                %update all turning fractions
                %interval by same value
                if timeSteps(t)>=timeRC(min(length(timeRC),next_rc))
                    next_rc = next_rc+1;
                    act_t(min(totT+1,t+tVeh))=true;

                    %compute the turn probabilities

                    P=zeros(length(incomingLinks),length(outgoingLinks));
                    
                    for l=1:length(incomingLinks)
                        l_in=incomingLinks(l);
                        for i=1:length(outgoingLinks)
                            l_out=outgoingLinks(i);
                            if isinf(util_map(l_out,end))
                                continue;
                            end                            
                            
                            time=timeSteps(min(totT+1,t+tVeh))+simTT(l_out,min(totT+1,t+tVeh));
                            
                            %val=interpoleren+TT+penalties                    
                            
                            %interpolatie                                                  
                            if time>=timeSteps(end)
                                val =util_map(l_out,end);
                            else
                                t1 = min(totT+1,max(t+tVeh+1,1+floor(time/dt)));
                                t2 = min(totT+1,t1+1);
                                if(1+time/dt-t1<0)
                                    t1=t;
                                    t2=t+1;
                                end
                                val = util_map(l_out,t1)+max(0,(1+time/dt-t1))*(util_map(l_out,t2)-util_map(l_out,t1));

                            end
                            
                            %TT
                            val = val + betaTT * simTT(l_out,min(totT+1,t+tVeh));
                            
                            % penalties
                            val= val + betaUturn*UTurn(l_in,l_out)+betaHierarchy*Hierarchy(l_in,l_out);
                            
                            P(l,i)=exp(mu*val); %not normalized
                        end
                    end
                end
                %updating of the turning fractions
                TF{n,t,d_index}=zeros(max(1,length(incomingLinks)),length(outgoingLinks));
                if sum(P)==0
                    continue;
                end
                TF{n,t,d_index}=P./repmat(sum(P,2),1,length(outgoingLinks));
            end
        end
    end
    
    if nargout>1
        arr_map_d(d_index);
        gap_dt=gap_dt+sum(sum(gap(:,2:end).*diff(cvn_up(:,:,d_index),1,2)));
        gap_dt_s=gap_dt_s+sum(sum(gap_s(:,2:end).*diff(cvn_up(:,:,d_index),1,2)));
    else
        gap = inf;
        gap_s = inf;
    end  
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
        v = betaTT*TT+betaUturn*UTurn+betaHierarchy*Hierarchy;
        %compute M (connectivity & travel time)
        M = exp(mu*v).*(TT>0);
        %compute b (destinations)
        b=zeros(totLinks,1);
        b(endN==d)=1;
        %compute z (exponent of value function)
        z = (eye(length(b)) -M)\b;
        %compute utility map
        util_map(:,totT+1)=1/mu*log(z);
        
        %next do the others in upwind order
        for t=totT:-1:1
            
            util_map(:,t)=util_map(:,t+1);
            old_util_map=ones(totLinks,1)*Inf;
            while(max(abs((util_map(:,t)-old_util_map))./util_map(:,t))>0.01)
                old_util_map=util_map(:,t);                
                for l_in=1:totLinks
                    if any(endN(l_in)==destinations)
                        if endN(l_in)~=d
                            util_map(l_in,t)=-inf;
                        else
                            util_map(l_in,t)=0;
                        end
                        continue;
                    end
                    outgoingLinks = find(strN==endN(l_in));
                    combined_util=0;
                    for l_out=outgoingLinks'
                        if isinf(util_map(l_out,end))
                            continue;
                        end
                        time=timeSteps(t)+simTT(l_out,t);

                        %val=interpoleren+TT+penalties                    
                        %interpolatie
                        if time>=timeSteps(end)
                            val = util_map(l_out,end);
                        else
                            t1 = min(totT+1,max(t+1,1+floor(time/dt)));
                            t2 = min(totT+1,t1+1);  
                            
                            if(1+time/dt-t1<0)
                                t1=t;
                                t2=t+1;
                            end
                            
                            val = util_map(l_out,t1)+max(0,(1+time/dt-t1))*(util_map(l_out,t2)-util_map(l_out,t1)); % 1+time/dt-t1 niet lager dan 1 hier
                            %als lager dan 1, dan zou het moeten interpoleren
                            %met waarde uit zelfde tijdslaag
                        end

                        %TT                   
                        val = val + betaTT * simTT(l_out,t);

                        % penalties
                        val= val + betaUturn*UTurn(l_in,l_out)+betaHierarchy*Hierarchy(l_in,l_out);

                        combined_util=combined_util+exp(mu*val);
                    end
                    util_map(l_in,t) = 1/mu*log(combined_util);
                end
            end
            
        end
    end

%Nested function used for finding the destination based arrival map
    function [arr_map,parent] = arr_map_d(d_index)
        d=destinations(d_index);
        netCostMatrix=sparse(endN,strN,simTT(:,end),totNodes,totNodes);
        [par, dist] = dijkstra(netCostMatrix, d);
        parent = zeros(totNodes,totT+1);
        parent(:,totT+1) = par;
        arr_map = zeros(totNodes,totT+1);
        arr_map(:,totT+1)=dist+dt*totT;
        for t=totT+1:-1:1
            arr_map(:,t)=arr_map(:,min(t+1,totT));
            old_arr_map=ones(totNodes,1)*Inf;
            while(max(abs((arr_map(:,t)-old_arr_map))./arr_map(:,t))>0.01)
                old_arr_map=arr_map(:,t);    
                for n=1:totNodes
                    if any(n==destinations)
                        if n~=d
                            arr_map(n,t)=inf;
                        else
                            arr_map(n,t)=(t-1)*dt;
                        end
                        continue;
                    end
                    outgoingLinks = find(strN==n);
                    arr = inf;
                    min_phi = inf;
                    for l=outgoingLinks'
                        time=timeSteps(t)+simTT(l,t);
                        if time>=timeSteps(end)
                            val=time-dt*totT+arr_map(endN(l),end);
                        else
                            t1 = min(totT+1,max(t+1,1+floor(time/dt)));
                            t2 = min(totT+1,t1+1);
                            if(1+time/dt-t1<0)
                                t1=t;
                                t2=t+1;
                            end
                            val = arr_map(endN(l),t1,:)+max(0,(1+time/dt-t1))*(arr_map(endN(l),t2,:)-arr_map(endN(l),t1,:));
                        end
                        if cvn_up(l,t,d_index)>0
                            gap(l,t) = gap(l,t) + val;
                            phi = 1/mu*log(cvn_up(l,t,d_index)-cvn_up(l,max(t-1,1),d_index))+val-(t-1)*dt;
                            gap_s(l,t) = phi;
                            if phi<=min_phi
                                min_phi=phi;
                            end
                        end
                        if val<=arr
                            arr=val;
                            parent(n,t) = endN(l);
                        end
                    end
                    for l=outgoingLinks'
                        if cvn_up(l,t,d_index)>0
                            gap(l,t) = gap(l,t) - arr;
                            gap_s(l,t) = gap_s(l,t)-min_phi;
                        end
                    end
                    arr_map(n,t)=arr;
                end
            end
        end
    end

end