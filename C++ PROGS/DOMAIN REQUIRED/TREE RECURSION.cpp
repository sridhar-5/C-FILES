#include <simplecpp>
#include <cstdio>
#include <cmath>

void tree(int l,double rx,double ry,double h,double w)
{
 if (l > 0)
 {
  Line left(rx,ry,rx-w/4,ry-h/l);
  Line right(rx,ry,rx+w/4,ry-h/l);
  right.imprint();
  left.imprint();
  tree(l-1,rx-w/4,ry-h/l,h-h/l,w/2);
  tree(l-1,rx+w/4,ry-h/l,h-h/l,w/2);
 }
}
int main()
{
  initCanvas("Tree",500,500);
  tree(8,250,300,300,500);
  wait(20);
}
