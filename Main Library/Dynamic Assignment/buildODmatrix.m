function [od_matrix,origins,destinations] = buildODmatrix(ODmatrices,timeSeries,dt,totT)


%find all non empty od cells
sumOD=ODmatrices{1,1};
for t=2:length(ODmatrices)
    sumOD = sumOD+ODmatrices{1,t};
end

%origins
origins = find(sum(sumOD,2)>0)';

%destinations
destinations = find(sum(sumOD,1)>0);
   
%build odmatrix
od_matrix = zeros(length(origins),length(destinations),totT);

timeSteps = dt*[0:1:totT];
timeSeries = cell2mat(timeSeries);

for t=1:totT
    tempSlices = unique([find(timeSeries<=timeSteps(t),1,'last'),find(timeSeries<timeSteps(t+1),1,'last')]);
    if length(tempSlices)==1
        od_matrix(:,:,t)=ODmatrices{min(length(ODmatrices),tempSlices)}(origins,destinations);
    elseif length(tempSlices)>1
        tempSlices = tempSlices(1):tempSlices(end);
        tempFrac = (timeSeries(tempSlices(2))-timeSteps(t))/dt;
        od_matrix(:,:,t)=tempFrac*ODmatrices{tempSlices(1)}(origins,destinations);
        for i=2:length(tempSlices)-1
            tempFrac = (timeSeries(tempSlices(i))-timeSeries(tempSlices(i+1)))/dt;
            od_matrix(:,:,t)=od_matrix(:,:,t)+tempFrac*ODmatrices{tempSlices(end)}(origins,destinations);
        end
        tempFrac = (timeSteps(t+1)-timeSeries(tempSlices(end)))/dt;
        od_matrix(:,:,t)=od_matrix(:,:,t)+tempFrac*ODmatrices{tempSlices(end)}(origins,destinations);
    end
end

end