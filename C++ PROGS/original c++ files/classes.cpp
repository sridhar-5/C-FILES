#include <iostream>
#include <cmath>

using namespace std;

class box
{
public:
  double length;
  double breadth;
  double height;
  double v;

  int getdata()
  {
    cout << "please enter a number : ";
    cin >> length;
    cout << "please enter a number : ";
    cin >> breadth;
    cout << "please enter a number : ";
    cin >> height;
  }
public:
  void volume()
  {
      return length*breadth*height;
  }

};
int main()
{
  box b1;
  int v;
  b1.getdata();
  v = b1.volume();
  cout << v;
}
