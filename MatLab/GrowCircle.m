% Write a program which increases the size of a circle
function [] = GrowCircle(rmin, rmax)
nrFrames = 100;
rgbStart = [1 0 0];
rgbEnd   = [0 0 1];
for k = 1 : 1 : nrFrames
    cla;
    set(gca, 'xlim', [-100, 100]);
    set(gca, 'ylim', [-100, 100]);
    hold on;
    r = rmin + (rmax - rmin) * (k - 1) / (nrFrames - 1);
    rgb = rgbStart + (rgbEnd - rgbStart) * (k - 1) / (nrFrames - 1);
    cx = 0;
    cy = 0;
    h=DrawCircle(r, cx, cy, 0, 360, 80);
    set(h, 'color', rgb);
    pause(0.1);
end
end