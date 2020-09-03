#include <simplecpp>
#include <cstdio>
#include <cmath>
#include <iostream>

main_program{

initCanvas("pentagon",1500,1000);  // this line is to specify the size of the canvas and and name the canvas
Turtle t1,t2,t3;

t2.left(120);
t3.left(240);

repeat(10)                   // this will draw a decagon.
{
t1.forward(100);
t2.forward(100);
t3.forward(100);

t1.right(360.0/10);
t2.right(360.0/10);
t3.right(360.0/10);
}
wait(5);
}
