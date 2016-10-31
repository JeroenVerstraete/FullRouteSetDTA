function [links] = hierarchy(links)
% give the links a level of hierarchy depending on there speed (maybe later
% also capacity)
% Level 1: speed < 20
% Level 2: speed < 40
% Level 3: speed < 60
% Level 4: speed < 80
% Level 5: speed < 110
% Level 6: speed >= 110

lvl1=20;
lvl2=40;
lvl3=60;
lvl4=80;
lvl5=110;

levels=zeros(size(links,1),1);
levels(links.freeSpeed<lvl1)=1;
levels(links.freeSpeed<lvl2 & links.freeSpeed>=lvl1)=2;
levels(links.freeSpeed<lvl3 & links.freeSpeed>=lvl2)=3;
levels(links.freeSpeed<lvl4 & links.freeSpeed>=lvl3)=4;
levels(links.freeSpeed<lvl5 & links.freeSpeed>=lvl4)=5;
levels(links.freeSpeed>=lvl5)=6;

links.level=levels;
end


