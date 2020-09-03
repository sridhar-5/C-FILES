#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,i,m,remainder;
	cout <<"Please enter the larger number : ";
    cin  >> m;
    cout << "\nplease enter the smaller number : ";
	cin >> n;
	while (m % n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	} 
	cout << "the gcd of the number is : "<< n;
}
