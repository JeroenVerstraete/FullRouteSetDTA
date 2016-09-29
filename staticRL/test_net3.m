%% again but now withouth origin link

%difference is now the connection matrix is based on links

%% build network 
%connection matrix (with link lengths)
  
%with penalty
p=10^6;
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
   
%with penalty like in the paper
p=10^10;
con = [0 p 1 0 2 0 0 0 0 0 0;
       1 0 0 0 0 0 0 0 0 4 0;
       0 0 0 p 0 1 2 0 0 0 0;
       0 1 p 0 2 0 0 0 0 0 0;
       0 0 0 0 0 0 0 0 1 0 0;
       0 0 0 0 0 0 0 0 1 0 0;
       0 0 0 0 0 0 0 p 0 0 1;
       0 0 0 1 0 1 p 0 0 0 0;
       0 0 0 0 0 0 0 2 0 0 1;
       0 0 0 0 0 0 0 2 0 0 1;
       0 0 0 0 0 0 0 0 0 0 0;];
	  
b = -1.5;
v = b*con;
	   
mu = 1;

%matrix of instantaneous utilities
M = exp(1/mu*v).*(con>0);

%destination connection
b = zeros(size(con,1),1);
b(end) = 1;

%solve system of equations
% z = linsolve((eye(length(b))-M),b); % faster if options are used
z = (eye(length(b))-M)\b;

%probabilities
P = zeros(size(con));
for i=1:length(b)-1
	P(i,:)=M(i,:).*z'/(M(i,:)*z);
end

% Path=[prod(P(sub2ind(size(P),[1,2,4,8],[2,4,8,12])));
%       prod(P(sub2ind(size(P),[1,2,4,7,10],[2,4,7,10,12])));
%       prod(P(sub2ind(size(P),[1,2,6,10],[2,6,10,12])));
%       prod(P(sub2ind(size(P),[1,11],[11,12])));] 

Path=[prod(P(sub2ind(size(P),[2,1,3,7],[1,3,7,11])));
      prod(P(sub2ind(size(P),[2,1,3,6,9],[1,3,6,9,11])));
      prod(P(sub2ind(size(P),[2,1,5,9],[1,5,9,11])));
      prod(P(sub2ind(size(P),[2,10],[10,11])));] 


%in the paper
G=zeros(size(con,1),1);
G(2)=1;
% G=ones(size(con,1),1);
% G(end)=1;


%link flows
% F = linsolve((eye(length(G))-P.'),G);% faster if options are used
F = (eye(length(G))-P.')\G;

figure;
plot(0,prod(P(sub2ind(size(P),[2,1,3,7],[1,3,7,11]))),'x')
hold on;
for j=1:100

    %Link size attribute based on flow
    [r,c]=find(con>0);
    LS = zeros(size(con));
    LS(sub2ind([11,11],r,c))=F(c);

    bl=-1.95;
    bls=-1.25;

    v=bl*con + bls*LS;

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
    P1=prod(P(sub2ind(size(P),[2,1,3,7],[1,3,7,11])));
    plot(j,P1,'x')

    %link flows
    F = linsolve((eye(length(G))-P.'),G);
end

Path=[prod(P(sub2ind(size(P),[2,1,3,7],[1,3,7,11])));
      prod(P(sub2ind(size(P),[2,1,3,6,9],[1,3,6,9,11])));
      prod(P(sub2ind(size(P),[2,1,5,9],[1,5,9,11])));
      prod(P(sub2ind(size(P),[2,10],[10,11])));] 

