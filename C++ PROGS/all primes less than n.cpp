#include <simplecpp>
#include <cstdio>
#include <cmath>

int main()
{
int i,j,n,count=0;

cout << "please enter a number : ";
cin >> n;

for (i = 2; i <= n; i++)
{
   count = 0;
   for (j = 1; j < n; j++)
   {
     if (i % j == 0)
     {
        count = count + 1;
     }
   }
   if (count > 2)
   {
    cout << "The number " << i <<" is composite.";
    cout << "\n";
   }
   else {
   cout << "The number " << i << "is a prime.";
   cout << "\n";
   }
}

}
