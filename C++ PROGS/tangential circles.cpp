#include <simplecpp>
#include <cstdio>
#include <iostream>

main_program{
turtleSim();
repeat(360)
{
forward(2);
right(1);
}
wait(2);
repeat(360)
{
left(1);
forward(2);
}
}
