#include <cstdio>
#include <simplecpp>
#include <iostream>
#include <cmath>

int gcd(int m , int n)
{
  while (m % n != 0)
  {
    int remainder = m % n;
    m = n;
    n = remainder;
  }
  return n;
}

int main()
{
  int m,n;
  cout << "please enter the larger number : ";
  cin >> m ;
  cout << "please enter the smaller number : ";
  cin >> n;
  int gc = gcd(m , n);
  cout << "the gcd = " << gc;
}

