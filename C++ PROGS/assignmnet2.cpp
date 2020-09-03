/*  Write a program that reads in a number n and
prints out the letter T using '*' characters.
 The horizontal line in the 'T' should have length 3n and width n,
  and the vertical line below it should have length 2n and width n.
   Thus, for n=3 your program should print as follows. */

#include <iostream>
#include <simplecpp>

main_program{

int n;

cout << "please enter an integer";

cin >> n ;

repeat(n){
cout << "\n";
repeat(3*n){
cout << "*";
}
}
repeat(n){
cout << "\n";
repeat(n){
cout << " ";
}
repeat(n){
cout << "*";
}
}

}

