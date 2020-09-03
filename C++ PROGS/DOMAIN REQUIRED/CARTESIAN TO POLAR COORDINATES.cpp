#include <simplecpp>
#include <iostream>
#include <cstdio>
#include <cmath>

void polar(double x,double y,double *pr,double *pthe)
{
  *pr = sqrt(x*x + y*y);
  *pthe = atan2(x,y);
  return;
}

int main()
{
double x,y,r,theta;
  cin >> x;
  cin >> y;
  polar(x,y,&r,&theta);
  cout << r << "  "
                   << theta << endl;
}
