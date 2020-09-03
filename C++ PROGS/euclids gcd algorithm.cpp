#include <iostream>
#include <simplecpp>
#include <cmath>

int main(){
int n;
int m;
int nextm;
int nextn;

cout << "Please enter the numbers for whome the GCD has to be found : ";

cin >> m;
cin >> n;

while (m % n != 0)
{
  nextm = m % n;
  nextn = n ;
  m = nextm;
  n = nextn;
}
cout << "The GCD of the entered numbers is : "<< n << endl;
return 0;
}
