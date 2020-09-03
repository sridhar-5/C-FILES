
#include <simplecpp>
#include <cstdio>
#include <cmath>

int main()
{
int n,a,r,i;

cout << "Please enter the first term (a) : " << endl;
cin >> a;
cout << "\n please enter the common ratio (r) : ";
cin >> r;
cout << "\n please enter the no of terms to print(n) :";
cin >> n ;

for(i = 0 ; i < n; i++)
{
   int term = a * pow(r,i);
   cout << "The" << i+1 << "th term of the sequence is " << term << endl;
}
}
