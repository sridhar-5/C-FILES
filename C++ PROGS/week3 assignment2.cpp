/*The following program is supposed to read 10 numbers and print 1 if some
 3 consecutive numbers are identical, and print 0 otherwise.

main_program{
  int L; cin >> L;
  int C = 1;
  bool FOUND = false;
  for(int i=0; i<9; i++){
    // When control reaches here L should hold the last read number.
    // C should be j if the last j numbers read were all L.

    ...SOME CODE...

  }
  if(FOUND) cout << 1 << endl;
  else cout << 0 << endl;
}

The code you give should follow the invariant given in the comment.
 You will notice that the invariant is indeed true at the beginning of the first iteration:
  the last number read is indeed in L, and the last C numbers read are L.
  The code you give should read in the next number, and then set the variables L and C so
   that the invariant becomes true at the end of the iteration

so it will be true at the beginning of the next iteration).
 Your code should also set FOUND to true if you discover that three identical numbers have been read consecutively.  The values of L, C will help you decide when to do this.  You will see that there is something interesting about your program: it does not remember the last 3 numbers typed in by the user, it only remembers whether they were identical.

Only submit what is supposed to go in place of ...SOME CODE...

*/
#include <simplecpp>
#include <cmath>
#include <iostream>

int main(){
int n,i;

cin >> n;
int l,count = 1;
for (i=0;i<9;i++)
{
  cin >> l ;
  if (n == l) {
    count = count + 1;
  }
  else {
    l = n;
    count = 1;
  }
  if (count > 3)
  {
    cout << "1" << endl;
  }
  else {
    cout << "0" << endl;
  }
}
}


