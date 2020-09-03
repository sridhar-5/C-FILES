#include <iostream>
#include <cmath>

using namespace std;

class me{

public:
  int a;
  int b;
  int sum;

  int getdata()
  {
    cout << "please enter a number : ";
    cin >> a;
    cout << "please enter a number : ";
    cin >> b;
  }
public:
  int volume()
  {
    return a + b;
  }
};
int main()
{
  me m1;
  m1.getdata();
  double vol;
  vol = m1.volume();
  cout << vol;
}
