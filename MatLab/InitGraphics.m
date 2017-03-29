function [] = InitGraphics()
cla;
set(gca, 'xlim', [0 100]);
set(gca, 'ylim', [0 100]);
hold on;
grid on;
axis square;
end