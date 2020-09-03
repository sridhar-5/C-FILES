#include <iostream>
#include <simplecpp>


main_program{
int n;
int m;
int nextm;
int nextn;

cout << "Please enter two integers : ";

cin >> m;

cin >> n;

while (m%n != 0)
{
  nextm = n ;
  nextn = m % n;
  m = nextm;
  n = nextn;
}
cout << "The GCD of the entered numbers is : "<< n << endl;
return 0;
}
