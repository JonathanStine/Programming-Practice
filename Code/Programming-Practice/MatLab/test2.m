function [] = test2()
aStart = 30;
bStart = 30;
aLast  = 3;
bLast  = 3;
InitGraphics();
[cx1, cy1] = ginput(1);
[cx2, cy2] = ginput(1);
nrFrames = 100;
for k = 1 : 1 : nrFrames
    InitGraphics();
    %draw the k-th frame  
    a = aStart + (aLast - aStart) * (k-1) / (nrFrames - 1);
    b = bStart + (bLast - bStart) * (k-1) / (nrFrames - 1);
    cx = cx1 + (cx2 - cx1) * (k - 1) / (nrFrames - 1);
    cy = cy1 + (cy2 - cy1) * (k - 1) / (nrFrames - 1);    
    DrawRect(cx, cy, a, b, [1.0 0.2, 0.4]);
    DrawRect(cx1, cy1, aStart, bStart, [1.0 0.2, 0.4]);
    DrawRect(cx2, cy2, aLast, bLast, [1.0 0.2, 0.4]);
    pause(0.01);
end
end