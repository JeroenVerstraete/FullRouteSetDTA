%% build network 
%connection matrix (with link lengths)
%vaste kost op de link, van link naar link
  
%with penalty voor U-turn
p=10^1;
con = [0 1 0 0 0 0 0 0 0 0 4 0;
       0 0 p 1 0 2 0 0 0 0 0 0;
       0 p 0 0 0 0 0 0 0 0 4 0;
       0 0 0 0 p 0 1 2 0 0 0 0;
       0 0 1 p 0 2 0 0 0 0 0 0;
       0 0 0 0 0 0 0 0 0 1 0 0;
       0 0 0 0 0 0 0 0 0 1 0 0;
       0 0 0 0 0 0 0 0 p 0 0 1;
       0 0 0 0 1 0 1 p 0 0 0 0;
       0 0 0 0 0 0 0 0 2 0 0 1;
       0 0 0 0 0 0 0 0 2 0 0 1;
       0 0 0 0 0 0 0 0 0 0 0 0;];
	  
b = -1.5;
v = b*con;
	   
mu = 1;

%matrix of instantaneous utilities
M = exp(1/mu*v).*(con>0);

%destination connection
b = zeros(size(con,1),1);
b(end) = 1;

b = eye(size(con,1));
%solve system of equations
z = linsolve((eye(length(b))-M),b);

%probabilities
P = zeros(size(con));
for i=1:length(b)-1
	P(i,:)=M(i,:).*z'/(M(i,:)*z);
end

P(1,:)=1;

Path=[prod(P(sub2ind(size(P),[1,2,4,8],[2,4,8,12])));
      prod(P(sub2ind(size(P),[1,2,4,7,10],[2,4,7,10,12])));
      prod(P(sub2ind(size(P),[1,2,6,10],[2,6,10,12])));
      prod(P(sub2ind(size(P),[1,11],[11,12])));]   
  
% origin flow
G=zeros(size(con,1),1);
G(1,1)=1;
G(4,1)=1;

%link flows
F = linsolve((eye(length(G))-P.'),G);



