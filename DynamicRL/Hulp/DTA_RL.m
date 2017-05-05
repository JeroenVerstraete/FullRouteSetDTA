function [cvn_up,cvn_down,TF] = DTA_RL(nodes,links,origins,destinations,ODmatrix,lightintersection,dt,totT,rc_dt,maxIt,alpha,theta,bfigure,algorithm)
%nodes
%links
%origins - node numbers
%desitations - node numbers
%ODmatrix
%dt
%totT
%rc_dt
%maxIt
%alpha - stepsize
%theta - variance parameter
%bfigure - boolean if figure needed
%algorithm - int value of wich algorithm
%               0: normal
%               1: large time steps
%               2: node delays


%setup the output figure
if nargin < 12 || isempty(bfigure)
  bfigure = false;
elseif (bfigure)
  h = figure;
  semilogy(0,NaN);
end

if nargin <13
    rl=@stochasticTF_RL;
else
    switch algorithm
        case 0
            rl=@stochasticTF_RL;
        case 1
            rl=@stochasticTF_RL_LT;
        case 2
            rl=@stochasticTF_RL_Delay;
    end
end

%Maximum number of iterations
if isempty(maxIt)
    maxIt = 20; 
end

%initilization
totNodes = size(nodes.id,1);
totLinks = size(links.toNode,1);
totDest = length(destinations);
%cumulative vehicle numbers (cvn) are stored on both upstream and
%dowsntream link end of each link for every time slice
cvn_up = zeros(totLinks,totT+1,totDest);
cvn_down = zeros(totLinks,totT+1,totDest);

%Initialize the iteration numbering
it = 0; 

%Initialize the aggragation 
rc_agg = 'last'; %[first/middle/last]

%initialize the travel cost
[simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);

%initialize the gap function
gap = inf;
gap_TF = inf;
gap_flow = inf;
TF = [];

%Uturns
UTurn=zeros(totLinks,totLinks);
connectionMatrix =zeros(totLinks,totLinks);
for l=1:totLinks
    connectionMatrix(l,[links.fromNode]==links.toNode(l))=1; %check if connection is possible
    UTurn(l,[links.fromNode]==links.toNode(l)&[links.toNode]==links.fromNode(l))=1; %check if u-turn
end
UTurn=sparse(UTurn);

%Hierarchy
if isempty((find(strcmp(links.Properties.VariableNames, 'level'))))
    %level1 is laagste level. snelweg heeft de hoogste level
    links=hierarchy(links);
end 
Hierarchy = zeros(totLinks,totLinks);
[linksFrom,linksTo]=find(connectionMatrix);
goingDown=links.level(linksFrom)>links.level(linksTo);
Hierarchy(linksFrom(goingDown)+totLinks*(linksTo(goingDown)-1))=1;
Hierarchy=sparse(Hierarchy);
%Hierachy only for going down!

%Left,Right
[Left,Right]=turningAngle(nodes,links);

[flows_up_prev] = cvn2flows(sum(cvn_up,3),dt);
NodeDelay=nodeDelays(flows_up_prev,nodes,links,lightintersection);

%initialize the turning fractions (both first and last give the same result)
TF_new = rl(nodes,links,destinations,simTT,cvn_up,dt,totT,rc_dt,rc_agg,theta,UTurn,Hierarchy,Left,Right,NodeDelay);


%MAIN LOOP: iterate until convergence is reached or maximum number of
%iterations is reached
while it < maxIt && gap_flow > 10^-6
    display('New iteration')
    it = it+1;
    it
    gap_TF = 0;
    
    %calculate the update step
    if isempty(TF)
        TF = TF_new;
    else
%         alpha=1/it; %MSA
        for n = 1:totNodes
            for t = 1:totT
                for d= 1:totDest
                    update = (TF_new{n,t,d} - TF{n,t,d});
                    TF{n,t,d} = TF{n,t,d} + alpha*update;
                end
            end
        end
    end
%     sp=[TF{6,:,1}];
%     figure;plot(dt*[0:totT-1],sp(1:2:end),'r',dt*[0:totT-1],sp(2:2:end),'b');
%     grid on;
%     legend('fraction using the main road', 'fraction using the alternative');    
%     drawnow;
    
    %calculate new flows
    disp('start ltm');
    [cvn_up,cvn_down] = LTM_MC(nodes,links,origins,destinations,ODmatrix,dt,totT,TF);
    disp('end ltm');
    %update costs
    [simTT] = cvn2tt(sum(cvn_up,3),sum(cvn_down,3),dt,totT,links);
    %update flows
    [flows_up] = cvn2flows(sum(cvn_up,3),dt);
    
%     [flows] = cvn2flowsreal(cvn_up,cvn_down);

    
    NodeDelay=nodeDelays(flows_up,nodes,links,lightintersection);
    %Compute new turning fractions via all-or-nothing assignment
    %and compute convergence gap
    [TF_new,gap,gap_s] = rl(nodes,links,destinations,simTT,cvn_up,dt,totT,rc_dt,rc_agg,theta,UTurn,Hierarchy,Left,Right,NodeDelay);
    
    gap_flow = sum(sum(abs(flows_up-flows_up_prev)));
    %plot convergence in function of computation time
    if(bfigure)
        figure(h) 
        gap
        gap_flow
        hold on
%         time=cputime-start_time;
%         a=semilogy(time,gap,'r.');
%         b=semilogy(time,gap_s,'ob');
        semilogy(it+1,gap_flow,'xg');
%         legend([a,b,c],'gap based on simulation interval','adjusted gap based on simulation interval','total flow difference');
        drawnow;
    end
    flows_up_prev = flows_up;
end

%Check for number of iterations until convergence
if it >= maxIt 
    disp(['Maximum Iteration limit reached: ', num2str(maxIt), ' Gap_flow: ', num2str(gap_flow), ' Gap: ', num2str(gap)]);
else
    disp(['Convergence reached in iteration ', num2str(it), ' Gap_flow: ', num2str(gap_flow), ' Gap: ', num2str(gap)]);
end

end


