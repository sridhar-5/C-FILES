#include <simplecpp>
#include <cstdio>
#include <cmath>

int main()
{
  int i,n,sum = 0;

  cout << "please enter a number : ";
  cin >> n;
  for (i = 1;i < n;i++)
  {
    if (n % i == 0)
    {
      sum = sum + i;
    }
  }

  if (sum == n)
  {
    cout << "This number is a perfect number";

  }
}
