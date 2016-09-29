function [parents, distance, path] = dijkstra_neg(matrix,source)

%initialize
n = size(matrix, 2);
parents = zeros(n,1);
distance= inf(n,1);

%use priority queue for fast ordering and lookup of minimal distance
comp = javaObject('PairComparator');
nodesQueue = java.util.PriorityQueue(max(10,ceil(n/10)),comp);

%add the source node the list
nodesQueue.add([0, source]);

%the algorithm runs until all nodes are labeled
maxnum = numel(nodesQueue.peek());

while numel(nodesQueue.peek()) > 0 %nodesQueue.size()>0
    %remove closest node
    elem = nodesQueue.poll();
    u = elem(2);%node
    k = elem(1);%travel cost
    %update the distance
    if k<distance(u)
        distance(u)=k;
    end
    %go over all unvisited neighbours
    [~,nv,s] = find(matrix(u,:));
    for i = 1:length(nv)
        v=nv(i);
        temp = s(i) + distance(u);
        if temp < distance(v)
            %if a new value is found it is added to the list
            nodesQueue.add([temp, v]);
            distance(v) = temp;
            parents(v) = u;
        end
    end
end
path=[];
