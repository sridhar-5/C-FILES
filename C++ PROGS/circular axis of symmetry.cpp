#include <simplecpp>
#include <cstdio>
#include <iostream>

main_program{
turtleSim();
repeat(360)
{
forward(0.5);
right(1);
}
repeat(360)
{
forward(0.5);
left(1);
}
repeat(7){
penUp();
repeat(60){
forward(0.5);
right(1);
}
penDown();
repeat(360)
{
forward(0.5);
left(1);
}
}
}
