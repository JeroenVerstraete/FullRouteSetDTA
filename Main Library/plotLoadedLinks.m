function [handle_fig,handle_rect,handle_txt] = plotLoadedLinks(nodes,links,load,show_labels,fig_num,scale,maxLoad,titleName)
%Plots the link loads on a network
%
%SYNTAX
%   [handle_fig,handle_rect,handle_txt] = plotLoadedLinks(nodes,links,load,show_labels,fig_num,scale,maxLoad)
%
%DESCRIPTION
%   plots loads on link in the network and returns figure handles of the loaded network
%
%INPUTS
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   load: list of the load on each link
%   show_text: flag for visualizing labels
%   fig: parameter for the figure handle
%   maxLoad: scale parameter used for determining the loads


%local rename link properties
strN = links.fromNode;
endN = links.toNode;
x=nodes.x;
y=nodes.y;

%open figure
if isempty(fig_num)
    handle_fig = figure;
    hold on;
    plot(x,y,'.','MarkerEdgeColor',[0 0 0],'MarkerFaceColor',[0 0 0]);
    
    x_temp = zeros(length(strN)*3,1);
    x_temp(1:3:end) = x(strN);
    x_temp(2:3:end) = x(endN);
    x_temp(3:3:end) = NaN;
    
    y_temp = zeros(length(strN)*3,1);
    y_temp(1:3:end) = y(strN);
    y_temp(2:3:end) = y(endN);
    y_temp(3:3:end) = NaN;
    
    plot(x_temp, y_temp,'Color',[0 0 0]); %[0.9 0.7 0]
else
    handle_fig = figure(fig_num);
    hold on;
end

% handle_ax=axes;

%make a rectangular object for each link
upX=x(strN);
downX=x(endN);
upY=y(strN);
downY=y(endN);

%set scale
if isempty(scale)
    scale = 1/max(load)*0.25*sqrt((max(x)-min(x))^2+(max(y)-min(y))^2)/length(upX)^(1/2);
end

vx=downX-upX;
vy=downY-upY;
vl=sqrt(vx.^2+vy.^2);
vx=vx./vl;
vy=vy./vl;

sc=scale;
sc=scale*load';

xrec=[upX';upX'+sc.*vy';downX'+sc.*vy';downX'];
yrec=[upY';upY'-sc.*vx';downY'-sc.*vx';downY'];


%set the colours
ctemp=hsv(128);
cmap=colormap(ctemp(50:-1:1,:));
% cmap=colormap(handle_ax,ctemp(50:-1:1,:));


minc=0;%possible one could also use the minimal positive value of the load  %max(0,min(load));

if isempty(maxLoad)
    maxc=max(load);
else
    maxc=maxLoad;
end

crec=cmap(ceil(49*(load'-minc+100*eps)/(maxc-minc+100*eps))',:);
caxis([minc maxc]);

yrec(yrec<0)=0;
xrec(xrec<0)=0;

%visualize all loads
handle_rect=patch(xrec,yrec,load);
set(handle_rect,'FaceColor','flat','FaceVertexCData',crec);
warning off verbose
colorbar('EastOutside');
% colorbar(handle_ax,'EastOutside');

handle_txt=[];
if show_labels
    cx=[x(strN)+x(endN)]/2;
    cy=[y(strN)+y(endN)]/2;
    id=[1:length(cx)]';
    bl=(upX >= downX & upY <= downY);
    tl=(upX < downX & upY < downY);
    br=(upX >= downX & upY > downY);
    tr=(upX < downX & upY >= downY);
    t1=text(cx(bl),cy(bl),num2str(load(bl)),'Color',[0 0 0],'VerticalAlignment','Bottom','HorizontalAlignment','Left','FontWeight','bold','Clipping','on','hittest','off');
    t2=text(cx(tl),cy(tl),num2str(load(tl)),'Color',[0 0 0],'VerticalAlignment','Top','HorizontalAlignment','Left','FontWeight','bold','Clipping','on','hittest','off');
    t3=text(cx(br),cy(br),num2str(load(br)),'Color',[0 0 0],'VerticalAlignment','Bottom','HorizontalAlignment','Right','FontWeight','bold','Clipping','on','hittest','off');
    t4=text(cx(tr),cy(tr),num2str(load(tr)),'Color',[0 0 0],'VerticalAlignment','Top','HorizontalAlignment','Right','FontWeight','bold','Clipping','on','hittest','off');       
	handle_txt=[t1;t2;t3;t4];
end

%Setup figure
margX=0.1*(max(x)-min(x))+100*eps;
margY=0.1*(max(y)-min(y))+100*eps;
axis([min(x)-margX max(x)+margX min(y)-margY max(y)+margY])

title(titleName)
xlabel('X coordinate')
ylabel('Y coordinate')

% set(handle_fig, 'Position', [100, 100, 500, 300]);
hold off;

end