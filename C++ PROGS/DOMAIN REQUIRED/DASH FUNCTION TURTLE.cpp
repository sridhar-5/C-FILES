#include <simplecpp>
#include <cstdio>
#include <cmath>
#include <iostream>

void dash(double d , int n)
{
  repeat(n)
  {
    forward(d/(2*n));
    penUp();
    forward(d/(2*n));
    penDown();
  }
  wait(5);
}

int main()
{
 int n;
 double d;
 turtleSim();
 cout << "please enter the diatance to be covered with dashes : ";
 cin >> d;
 cout << "how many dashes required : ";
 cin >> n;
 dash(d , n);
}
