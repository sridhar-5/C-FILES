#include <simplecpp>
#include <iostream>
#include <cmath>

int main(){
turtleSim();
char s;
float l,ang;

repeat(100){
cout << "\n 1. f if you want to move turtle forward \n 2. r - if you want the turtle to turn right \n 3. l - if the you want the turtle to turn left \n 4. u - for penup \n 5. d - for pendown \n 6. b - to end the program";
cout << "\n PLEASE ENTER A CHARACTER TO DRIVE THE TURTLE :";
cin >> s;
if (s == 'f' || s == 'F')
{
  cout << "please enter the length to move the turtle : ";
  cin >> l;
  forward(l);
}
else if(s == 'r' || s == 'R')
{
  cout << "Enter the no of degrees to turn : ";
  cin >> ang ;
  right(ang);
}
else if (s == 'l' || s == 'L')
{
  cout << "Enter the no of degrees to turn : ";
  cin >> ang ;
  left(ang);
}
else if (s == 'b' || s == 'B')
{
  break;
}
else if (s == 'u' || s == 'U')
{
  penUp();
}
else if (s == 'd' || s == 'D')
{
  penDown();
}
}
}
