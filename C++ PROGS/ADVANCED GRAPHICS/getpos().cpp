#include <simplecpp>

main_program{
int clickposition,n;

initCanvas("getpos",500,500);
cin >> n;


repeat(n)
{
clickposition = getClick();
cout << "The coordinates of the postion clicked is : ( " << clickposition/65536<< "," << clickposition % 65536 << ")\n";
}

}
