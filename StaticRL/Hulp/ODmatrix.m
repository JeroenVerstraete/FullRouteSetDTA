function [od_matrix,origins,destinations] = ODmatrix(odmatrix)

%origins
origins = find(sum(odmatrix,2)>0)';

%destinations
destinations = find(sum(odmatrix,1)>0);
   
%build odmatrix
% od_matrix = zeros(length(origins),length(destinations));


od_matrix=odmatrix(origins,destinations);
end