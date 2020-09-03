#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int m, int n)
{
	while (m % n != 0)
	{
		int remainder = m % n;
		m = n;
		n = remainder;
	}
	return n;
}
int lcm (int m , int n)
{
	int cm = (m*n)/gcd(m , n) ;
	return cm;
}

int main()
{
	int m,n;
	cout << "please enter the larger number : ";
	cin >> m;
	cout << "please enter the smaller number : ";
	cin >> n;
	int cm = lcm(m , n);
	cout << "the lcm of above numbers is : " << cm;
}


