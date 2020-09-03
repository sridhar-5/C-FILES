#include <simplecpp>
#include <iostream>
#include <cstdio>
#include <cmath>

main_program{
initCanvas("circle",1500,1000);
Line line1(500,500,1000,500);
Line line2(500,550,1000,550);
Rectangle t1(600,600);

t1.setFill(true);
t1.setColor(COLOR(199,125,255));
wait(5);
cout << t1.getScale();
}

