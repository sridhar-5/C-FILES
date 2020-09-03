#include <simplecpp>

main_program{
initCanvas("projectile motion" , 1000,1000);

int start = getClick();

Circle c1(start/65536, start % 65536, 5);
c1.penDown();

double vx = 1,vy = 5, gravity = -0.1;

repeat(100)
{
c1.move(vx,vy);
vy += gravity;
wait(0.1);
}
wait(10);
}
