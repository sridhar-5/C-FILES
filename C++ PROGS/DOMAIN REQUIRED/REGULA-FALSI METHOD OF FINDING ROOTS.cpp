#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	double xl,xr,x1,epsilon = 0.00001;
	cout << "please enter the left hand limit  : ";
	cin >> xl;
	cout << "please enter the right hand limit : ";
	cin >> xr;
	while (xr - xl >= epsilon)
	{
		x1 = (((xr*xr*xr) + (xr) - 1 ) * (xl) - ((xl*xl*xl)+ xl - 1) * (xr)) / (((xr*xr*xr)+xr - 1) - ((xl*xl*xl)+xl-1));
		
		if (((x1*x1*x1)+ x1- 1) < 0 && ((xr*xr*xr) + (xr) - 1 ) > 0)
		{
			xl = x1;
		}
		else if (((x1*x1*x1)+ x1- 1) > 0 && ((xr*xr*xr) + (xr) - 1 ) < 0)
		{
			xr = x1;
		}
		else {
			xr = x1;
		}	
	}
	cout << "The root of the equation is : " << x1 ;
}
