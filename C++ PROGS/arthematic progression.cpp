#include <simplecpp>
#include <cstdio>
#include <cmath>

int main()
{
int n,a,d,i;

cout << "Please enter the first term (a) : " << endl;
cin >> a;
cout << "\n please enter the common difference (d) : ";
cin >> d;
cout << "\n please enter the no of terms to print(n) :";
cin >> n ;

for(i = 1 ; i < n; i++)
{
   cout << "The" << i << "th term of the sequence is " << a << endl;
   a = a + d ;
}
cout << "The " << n << "th term of the sequence is " << a << endl;
}
