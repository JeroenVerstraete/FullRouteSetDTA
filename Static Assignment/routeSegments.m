function path = routeSegments(parent,o,n,connectionMatrix)
if o == n
    path = [];
    return;
else
    if isnan(parent(n))
        path = nan;
        display('error');
        return;
    else
        path = [routeSegments(parent,o,parent(n),connectionMatrix) , full(connectionMatrix(parent(n),n))];
    end
end
end