function simDens = cvn2dens(cvn_up,cvn_down,totT,links)
    
    %compute the simulated densities
    simDens=(cvn_up-cvn_down)./repmat(links.length,1,totT+1);
end


