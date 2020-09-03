#include <simplecpp>
#include <cmath>
#include <iostream>

int main(){
int n,absol;
float squrt;
cout << "please enter an integer";

cin >> n;

if (n >= 0)
{
 squrt = sqrt(n);
 cout << "The squareroot of the number is :" << squrt << endl ;
}
else
{
int absol = abs(n);
squrt = sqrt(absol);
cout << "The squareroot of the number is :" << squrt << "i";

}

}
