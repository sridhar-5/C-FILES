#include <simplecpp>
#include <iostream>
#include <cstdio>
#include <cmath>

main_program{
turtleSim();

forward(80);
right(90);
forward(80);
right(90);
forward(80);
right(90);
forward(80);
right(90);
wait(1);

repeat(4){
penUp();
forward(10);
penDown();
right(90);
forward(80);
left(90);
forward(10);
left(90);
forward(80);
right(90);
}
wait(2);

repeat(4)
{
right(90);
penUp();
forward(10);
right(90);
penDown();
forward(80);
left(90);
penUp();
forward(10);

left(90);
penDown();
forward(80);
wait(3);
}




}
