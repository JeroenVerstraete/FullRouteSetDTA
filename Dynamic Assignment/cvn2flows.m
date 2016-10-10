function simFlows = cvn2flows(cvn,dt)

    %compute the simulated flows
    simFlows=diff(cvn,1,2)/dt;
end
