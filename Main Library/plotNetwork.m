function [handle_fig,handle_txt] = plotNetwork(nodes,links,show_label,fig_num)
%Plot a network
%
%SYNTAX
%   [handle] = PLOTNETWORK(nodes,links,scale) 
%
%DESCRIPTION
%   returns the handle to a figure of the network
%
%INPUTS
%   nodes: list of all the nodes in the network.
%   Each entry of the list represents one node. Each node is a structure that
%   has at least a node ID and an x and y coordinate of the node
%   links: list of all the links in the network
%   Each entry of the list represents one link. Each link is a structure that
%   has at least a link ID and an upstream and downstream node.
%   scale: parameter used to  control the size of lines, text, nodes,...


%local rename link properties
strN = links.fromNode;
endN = links.toNode;
x=nodes.x;
y=nodes.y;

%open figure
if isempty(fig_num)
    handle_fig = figure;
else
    handle_fig = figure(fig_num);
end
hold on;

%visulize the network
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

handle_txt=[];
if show_label
    a=[1:length(x)]';
    id=[1:length(x)]';
    t0=text(x(a),y(a),num2str(id(a)),'Color',[0 0 0],'VerticalAlignment','Bottom','HorizontalAlignment','Left','FontWeight','bold','Clipping','on','hittest','off');

    upX=x(strN);
    downX=x(endN);
    upY=y(strN);
    downY=y(endN);
    
    cx=[x(strN)+x(endN)]/2;
    cy=[y(strN)+y(endN)]/2;
    id=[1:length(cx)]';
    bl=(upX >= downX & upY <= downY);
    tl=(upX < downX & upY < downY);
    br=(upX >= downX & upY > downY);
    tr=(upX < downX & upY >= downY);
    t1=text(cx(bl),cy(bl),num2str(id(bl)),'Color',[1 0 0],'VerticalAlignment','Bottom','HorizontalAlignment','Left','FontWeight','bold','Clipping','on','hittest','off');
    t2=text(cx(tl),cy(tl),num2str(id(tl)),'Color',[0 1 0],'VerticalAlignment','Top','HorizontalAlignment','Left','FontWeight','bold','Clipping','on','hittest','off');
    t3=text(cx(br),cy(br),num2str(id(br)),'Color',[0 0 1],'VerticalAlignment','Bottom','HorizontalAlignment','Right','FontWeight','bold','Clipping','on','hittest','off');
    t4=text(cx(tr),cy(tr),num2str(id(tr)),'Color',[0 1 1],'VerticalAlignment','Top','HorizontalAlignment','Right','FontWeight','bold','Clipping','on','hittest','off');
    handle_txt=[t0;t1;t2;t3;t4];
end

%Setup figure
margX=0.1*(max(x)-min(x))+100*eps;
margY=0.1*(max(y)-min(y))+100*eps;
axis([min(x)-margX max(x)+margX min(y)-margY max(y)+margY])

title('Network Map')
xlabel('X coordinate')
ylabel('Y coordinate')

% set(handle_fig, 'Position', [100, 100, 400, 300]);
hold off;

end

