

#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  double xl,xr;
  cout << "please enter the left interval of finding roots : ";
  cin >> xl;
  cout << "please enter the right interval of finding the roots : ";
  cin >> xr;
  double xm,epsilon = 0.00001;

  while (xr - xl >= epsilon)
  {
    xm = (xr + xl) / 2;
    if ((xl*xl*xl*xl - 7 > 0 && xm*xm*xm*xm - 7 > 0))
    {
        xl = xm;
    }
    else if (xl*xl*xl*xl - 7  < 0 && xm*xm*xm*xm - 7 < 0)
    {
     xl = xm;
    }
    else
    {
      xr = xm;
    }
    cout << "\n" << xr;
  }
  cout << "the root of the equation is : " << xl ;
}
