#include <simplecpp>
#include <cmath>
#include <cstdio>

int factorial(int m)
{
   int i,fact = 1;
   for (i = m;i > 0;i--)
   {
      fact = fact * i;
   }
   return fact;
}

int main()
{
  int i;
  float n,sum=0;
  cout << "Please enter the angle for which sine has to be calculated : \n";
  cin >> n;

  for (i=0;i < 10;i++)
  {
    sum = sum + ((pow(-1,(i+2))*(pow(n,(2*i+1))))/factorial(2*i+1));
  }
  cout << "the value of sine is :" << sum;

}



