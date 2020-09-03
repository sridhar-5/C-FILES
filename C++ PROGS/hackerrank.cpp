#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int n,q,s,i,j;
	
	cout << "please enter no of indices : ";
	cin  >> n;
	cout << "please enter no of quesries : ";
	cin >> q;
	
	int arr[n][1000];
	int arr1[n];
	
	for (i = 0 ; i < n ; i++)
	{
		cout << "please enter the size of the array : ";
		cin >> arr1[i];
		for( j = 0 ; j <= arr1[i];j++)
		{
		    if (j == 0)
			{
				arr[i][j] = i;
			}
			else 
			{
				cout << "please enter array elem :  ";
				cin >> arr[i][j];
			}	
		}
	
	}
	int m , p;
	for (i = 0; i < q ; i++)
	{
		cout << "queries please : ";
		cin >> m >> p;
		
		cout  << arr[m][p+1];
		cout << "\n";
	}
}
