#include <simplecpp>
#include <cstdio>
#include <cmath>
#include <iostream>

int main()
{
 float x1,x2,y1,y2;

 cout << "please enter a number into (x1) : ";

 cin >> x1;

 cout << "please enter a number into (x2) : ";

 cin >> x2;

 cout << "please enter a number into (y1) : ";

 cin >> y1;

 cout << "please enter a number into (x1) : ";

 cin >> y2;

 float diff1 = abs((x2 - x1));
 float diff2 = abs((y2 - y1));

 float dist = sqrt((pow(diff2,2)+pow(diff1,2)));

 cout << "The distance between the two points is : " << dist << endl;
}
