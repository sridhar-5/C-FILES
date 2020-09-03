#include <simplecpp>
#include <cmath>
#include <cstdio>
#include <iostream>

main_program{
turtleSim();
repeat(10)
{
repeat(4){

forward(10);
right(90);
wait(0.5);
}
penUp();
forward(15);
penDown();
}
}
