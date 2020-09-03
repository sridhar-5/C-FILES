/* Write a program which prints the sum of the cubes
of the digits of a positive integer which is given as input. */

#include <iostream>
#include <simplecpp>
#include <cmath>

int main(){
int n,sum=0,rem;
cout << "please enter an integer" << endl;

cin >> n;

while (n > 0)
{
rem = n % 10;
sum = sum + (rem*rem*rem);
n = n/10;
}
cout << "The sum of cubes of the number is  :" << sum << "." <<endl;
}

