#include <simplecpp>
#include <iostream>
#include <cmath>

int main()
{
int i,count = 1;
float marks;
float sum = 0;

i = 1;

while (i > 0)
{
  cout << "Please enter the student's marks : ";
  cin >> marks;

  if (marks >= 0)
  {
     sum = sum + marks;
     count = count + 1;
  }
  else
  {
     i = -1;
  }
}
float avg;

avg = sum / (count - 1) ;

cout << "The average of the class is : " << avg << endl;
}
