#include <simplecpp>
#include <cstdio>
#include <cmath>
#include <iostream>

int main()
{
 turtleSim();
 int i = 0;
 repeat(180)
 {
   forward(20);
   right(1 + i);
    i += 1;
 }
}
