function [] = MoveInACircle(rOuter, rSmall)
nrFrames = 100;
angleStart = 0;
angleEnd = 360;
for k = 1 : 1 : nrFrames
 cla;
 set(gca, 'xlim', [-100, 100]);
 set(gca, 'ylim', [-100, 100]);
 hold on; 
DrawCircle(rOuter, 0, 0, 0, 360, 80);
angle = angleStart + (angleEnd - angleStart) * (k-1)/(nrFrames-1);
cx = cosd(angle) * rOuter + 0.0;
cy = sind(angle) * rOuter + 0.0;
DrawCircle(rSmall, cx, cy, 0, 360, 80);
pause(0.01);
end
end