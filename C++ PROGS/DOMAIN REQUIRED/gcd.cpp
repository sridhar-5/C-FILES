#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main()
{
	cout << gcd (205,943);
}

int gcd(int m,int n)
{
	if (m % n == 0)
	{
		return n;
	}
	else {
		return gcd(n , m%n);
	}
}
