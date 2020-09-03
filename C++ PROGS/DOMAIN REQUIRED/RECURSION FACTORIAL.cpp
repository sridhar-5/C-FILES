#include <simplecpp>
#include <cstdio>
#include <cmath>

int factorial(int n)
{
  if (n == 0)
  {
   return 1;
  }
  else {
   return n*factorial(n-1);
  }

}

int main()
{
 int n;
 cout << "please enter an integer : ";
 cin >> n;
 cout << factorial(n);
}
