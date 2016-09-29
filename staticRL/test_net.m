
%% build network 
%connection matrix (with link lengths)
con = [0 1 0 0 0 0 0;
	   0 0 1 0 0 4 0;
	   0 1 0 1 2 0 0;
	   0 0 1 0 1 2 0;
	   0 0 0 2 0 1 0;
	   0 0 0 0 0 0 1;
       0 0 0 0 0 0 0;];
	   
% con = [0 1 0 0 4 0;
% 	   1 0 1 2 0 0;
% 	   0 1 0 1 2 0;
% 	   0 0 2 0 1 0;
% 	   0 0 0 0 0 1;
%        0 0 0 0 0 0;];

v = -con;
	   
mu = 0.1;

%matrix of instantaneous utilities
M = exp(1/mu*v).*(con>0);

%destination connection
b = zeros(size(con,1),1);
b(end) = 1;

%solve system of equations
z = linsolve((eye(length(b))-M),b);

%probabilities
P = zeros(size(con));
for i=1:length(b)-1
	P(i,:)=M(i,:).*z'/(M(i,:)*z);
end


P1=prod(P(sub2ind(size(P),[1,2,3,4,6],[2,3,4,6,7]))) 
P2=prod(P(sub2ind(size(P),[1,2,3,4,5,6],[2,3,4,5,6,7]))) 
P3=prod(P(sub2ind(size(P),[1,2,3,5,6],[2,3,5,6,7]))) 
P4=prod(P(sub2ind(size(P),[1,2,6],[2,6,7]))) 



%origin flow
G=zeros(size(con,1),1);
G(1)=1;

%node flows or link flows?
F = linsolve((eye(length(G))-P.'),G);

%link flows
P.*repmat(F',length(G),1)
