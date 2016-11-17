function [TF,gap_dt,gap_dt_s]=RLTF(nodes,links,destinations,simTT,dt,totT,cvn_up,theta)

%% init
numD = length(destinations);
numN = length(nodes.id);
numL = length(links.id);
strN = links.fromNode;
endN = links.toNode;

timeSteps = dt*[0:1:totT];
gap = zeros(numL,totT+1);
gap_dt = 0;
gap_s = zeros(numL,totT+1);
gap_dt_s = 0;
% act_t = false(1,totT+1);
% gVeh = floor(rc_dt/dt);

%% connectionmatrix
% connectionmatrix stelt voor van welke links je naar welke kan gaan
% (zonder tijdsdimensie)
connectionMatrix = zeros(numL,numL);
UTurn = zeros(numL,numL);
for l=1:numL
    connectionMatrix(l,[links.fromNode]==links.toNode(l))=1; %check if connection is possible
    UTurn(l,[links.fromNode]==links.toNode(l)&[links.toNode]==links.fromNode(l))=1; %check if u-turn
end

%% TT and v
simTTL=simTT;
simTTL(:,end) = [];
TT=repmat(connectionMatrix,totT).*repmat(repelem(simTTL,1,numL),totT,1);

beta_tt=-1;
v = beta_tt*TT;

%% Calculate LL
mu=1;
LL = exp(1/mu*v).*(TT>0);
LL=sparse(LL);

%% for each destination
TF = num2cell(ones(numN,totT,numD));
for i_des=1:length(destinations)
    [arr_map,~] = arr_map_d(i_des);
    des=destinations(i_des);
    
    % Calculate SF
    SF=SFRL(numL,totT,simTTL,dt,connectionMatrix);   

    % Calulate M
    M=LL.*SF;
    
    % b
    b=zeros(numL*totT,1);
    tmp=[endN(des),(1:totT-2).*numL+endN(des)];
    b(tmp)=1;
    b=sparse(b);


    % bepalen Z (1 matrix for all destinations)
    z = (eye(length(b)) -M)\b;

    % bepaal P
    P=zeros(numL*totT:numL*totT);
    for i=1:numL*totT
        P(i,:)=M(i,:).*z(:,1)'/((M(i,:)*z(:,1))+eps);
    end

    P(isnan(P))=0;

    % transformeren naar TF

    for t=1:totT
        for n=1:numN
            inL=find(endN==n);
            outL=find(strN==n);
            tmp=zeros(max(size(inL,1),1),size(outL,1));
            if and(~isempty(outL),~isempty(inL))
                for i=inL'
                    for o=outL'
    %                     tmp(find(inL==i),:)=num2cell(nonzeros(P((t-1)*numL+i,:)));
                        row=P((t-1)*numL+i,:);
                        index=((1:totT)-1)*numL+o;
                        if ~isempty(index)
                            tmp(inL==i,outL==o)=sum(nonzeros(row(index)));
                        end
                    end
                end
                TF(n,t,i_des)={tmp};
            end
               
            
        end
    end
    
    gap_dt=gap_dt+sum(sum(gap(:,2:end).*diff(cvn_up(:,:,i_des),1,2)));
    gap_dt_s=gap_dt_s+sum(sum(gap_s(:,2:end).*diff(cvn_up(:,:,i_des),1,2)));
end

%Nested function used for finding the destination based arrival map
    function [arr_map,parent] = arr_map_d(d_index)
        d=destinations(d_index);
        netCostMatrix=sparse(endN,strN,simTT(:,end),numN,numN);
        [par, dist] = dijkstra(netCostMatrix, d);
        parent = zeros(numN,totT+1);
        parent(:,totT+1) = par;
        arr_map = zeros(numN,totT+1);
        arr_map(:,totT+1)=dist+dt*totT;
        for ta=totT+1:-1:1
            for na=1:numN
                if any(na==destinations)
                    if na~=d
                        arr_map(na,ta)=inf;
                    else
                        arr_map(na,ta)=(ta-1)*dt;
                    end
                    continue;
                end
                outgoingLinks = find(strN==na);
                arr = inf;
                min_phi = inf;
                for la=outgoingLinks'
                    time=timeSteps(ta)+simTT(la,ta);
                    if time>=timeSteps(end)
                        val=time-dt*totT+arr_map(endN(la),end);
                    else
                        t1 = min(totT+1,max(ta+1,1+floor(time/dt)));
                        t2 = min(totT+1,t1+1);
                        val = arr_map(endN(la),t1,:)+max(0,(1+time/dt-t1))*(arr_map(endN(la),t2,:)-arr_map(endN(la),t1,:));
                    end
                    if cvn_up(la,ta,d_index)>0
                        gap(la,ta) = gap(la,ta) + val;
                        phi = theta*log(cvn_up(la,ta,d_index)-cvn_up(la,max(ta-1,1),d_index))+val-(ta-1)*dt;
                        gap_s(la,ta) = phi;
                        if phi<=min_phi
                            min_phi=phi;
                        end
                    end
                    if val<=arr
                        arr=val;
                        parent(na,ta) = endN(la);
                    end
                end
                for la=outgoingLinks'
                    if cvn_up(la,ta,d_index)>0
                        gap(la,ta) = gap(la,ta) - arr;
                        gap_s(la,ta) = gap_s(la,ta)-min_phi;
                    end
                end
                arr_map(na,ta)=arr;
            end
        end
    end

end


