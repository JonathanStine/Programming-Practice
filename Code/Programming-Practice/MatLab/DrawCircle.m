function [h] = DrawCircle(r, cx, cy, startAngle, endAngle, nrSides)
% draw circle with radius r centered at (cx, cy)
angles = startAngle:(360/nrSides):endAngle;
xpts = cx + r * cosd(angles);
ypts = cy + r * sind(angles);
h=plot(xpts, ypts, '-r', 'LineWidth', 3);
end