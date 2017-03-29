function [] = HappyToSad()
 cla;
 set(gca, 'xlim', [-100, 100]);
 set(gca, 'ylim', [-100, 100]);
 hold on;
    
 DrawCircle(100, 0, 0, 0, 360, 80);
 DrawCircle(20, -60, 40, 0, 360, 80);
 DrawCircle(20, 60, 40, 0, 360, 80);
end