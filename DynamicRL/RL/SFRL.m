function [SF]=SFRL(numL,totT,simTT,dt,connectionmatrix)
    SF=zeros(numL*totT,numL*totT); 
    
    
    for t=1:totT
        for l=1:numL
            extra_t = simTT(l,t)/dt;
            t_ahead= floor(extra_t);
            fraction= 1-(extra_t-t_ahead);
            t2=t;
            for l2=1:numL
                if connectionmatrix(l2,l)
                    if(t+t_ahead<totT-1)
                        SF((t2-1)*numL+l2,(t-1+t_ahead)*numL+l)=fraction;
                        SF((t2-1)*numL+l2,(t+t_ahead)*numL+l)=1-fraction;
                    elseif(t+t_ahead-1<totT)
                        SF((t2-1)*numL+l2,(t-1+t_ahead)*numL+l)=fraction;
                    else
                        SF((t2-1)*numL+l2,(totT-1)*numL+l)=fraction;
                    end
                end
            end
        end
    end
end