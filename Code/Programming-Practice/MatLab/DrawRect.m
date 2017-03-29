function [h] = DrawRect(cx, cy, a, b, rgb)
% draw rectangle whose center is at (cx, cy)
% width is a
% height is b
% color is given by rgb
h = fill([cx - a/2, cx + a/2, cx + a/2, cx - a/2], ...
         [cy - b/2, cy - b/2, cy + b/2, cy + b/2], rgb);
end