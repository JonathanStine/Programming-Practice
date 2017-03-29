function [] = test()
aStart = 100;
bStart = 100;
aLast  = 7;
bLast  = 13;

nrFrames = 100;
for k = 1 : 1 : nrFrames
  cla;
  set(gca, 'xlim', [0 100]);
  set(gca, 'ylim', [0 100]);
  hold on;
    a = aStart + (aLast - aStart) * (k-1) / (nrFrames - 1);
    b = bStart + (bLast - bStart) * (k-1) / (nrFrames - 1);
    DrawRect(50, 50, a, b, [0.1 0.2 0.8]);
    pause(0.1);
end

end