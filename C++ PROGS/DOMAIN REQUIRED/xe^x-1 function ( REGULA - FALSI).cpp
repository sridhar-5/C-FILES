#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	double xl,xr,x1,epsilon = 0.1;
	cout << "please enter the left hand limit  : ";
	cin >> xl;
	cout << "please enter the right hand limit : ";
	cin >> xr;
	while (xr - xl >= epsilon)
	{
		x1 = (((xr*pow(2.718,xr))- 1) * (xl) - ((xl*pow(2.718,xl))- 1) * (xr)) / (((xr*pow(2.7,xr))- 1) - ((xl*pow(2.7,xl))- 1));
		
		if (((x1*pow(2.718,x1))- 1) < 0 && ((xr*pow(2.718,xr))- 1) > 0)
		{
			xl = x1;
		}
		else if (((x1*pow(2.718,x1))- 1) > 0 && ((xr*pow(2.718,xr))- 1) < 0)
		{
			xr = x1;
		}
		else {
			xr = x1;
		}	
	}
	cout << "The root of the equation is : " << x1 ;
}
