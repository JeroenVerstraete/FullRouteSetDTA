function [pathmatrix] = dijkstra_getpath(startNode,endNode,parent)
%recursive look up to get the path from a start node to an end node
%
%SYNTAX
%   [x] = dijkstra_getpath(startNode,endNode,parent)
%
%DESCRIPTION
%   returns the path from a start node to an end node
%
%
%INPUTS
%   startNode: the node from which the path should start
%   endNode: the node at which the path should end
%   parent: the parent node of each node in the network along the shortest
%   path

source = startNode;
backloop = endNode;
besttraject = parent;
trajectcost=0;
pathmatrix = [];
if(sum(besttraject) == 0)
    return;
end
while backloop ~= source
    if ( besttraject(backloop) == 0 )
        pathmatrix = [];
        return;
    end
    pathmatrix = [backloop,pathmatrix];
    backloop = besttraject(backloop);
end
pathmatrix = [source,pathmatrix];

% if startNode==endNode
%     path = startNode;
% else
%     intermediant = parent(endNode);
%     if intermediant == 0
%         path = zeros(0);
%         pathLink = zeros(0);
%         display('no path found...');
%         display(['check if node pair [' , int2str(startNode), ' - ', int2str(endNode) ,'] is connected']);
%         display('check if some link travel times are infinity in the network');
%         display('type dbquit to stop');
%         keyboard;
%         return;
%     else
%         path = [dijkstra_getpath(startNode,parent(endNode),parent) , endNode];
%     end
% end
end