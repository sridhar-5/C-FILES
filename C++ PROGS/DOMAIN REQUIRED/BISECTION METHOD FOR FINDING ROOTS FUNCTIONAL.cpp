#include <iostream>
#include <cstdio>
#include <functional>

using namespace std;

double bisection(double xl,double xr,double epsilon, std::function<double(double)>h)
{
  while (xr - xl >= epsilon)
  {
    double xm = (xr + xl) / 2;
    if (h(xl) > 0 && h(xm) > 0)
    {
        xl = xm;
    }
    else if (h(xl) < 0 && h(xm) < 0)
    {
       xl = xm;
    }
    else
    {
      xr = xm;
    }
  }
  return xl;
}

double f(double x)
{
    return (x*x - 2);
}
double g(double x)
{
   return (x*x*x - 3);
}

int main()
{
  double xl,xr;
  cout << "please enter the left interval of finding roots : ";
  cin >> xl;
  cout << "please enter the right interval of finding the roots : ";
  cin >> xr;
  bisection (1,2,0.00001,f);
  bisection(1,2,0.00001,g); 
}
