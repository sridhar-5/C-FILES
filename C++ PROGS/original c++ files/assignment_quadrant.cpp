#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
class quadrant
{
public:
  double x;
  double y;
public:
  int getdata()
  {
    cout << "please enter the x-coordinate : ";
    cin >> x;
    cout << "please enter the y- coordinate : ";
    cin >> y;
  }
public:
  int quad()
  {
    if(x > 0 && y > 0)
    {
      return 1;
    }
    else if (x < 0 && y > 0)
    {
      return 2;
    }
    else if(x < 0 && y < 0)
    {
      return 3;
    }
    else
    {
       return 4;
    }
  }
};
int main()
{
  quadrant q1;
  int v;
  q1.getdata();
  v = q1.quad();
  cout << "The point (" << q1.x << "," << q1.y << ") is in the "<< v <<" quadrant";
}
