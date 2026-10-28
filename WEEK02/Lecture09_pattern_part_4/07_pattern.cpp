#include <iostream>
using namespace std;

int main() {
  int row, col;

  for (row = 1; row <= 4; row = row + 1) {

    // print space
    for (col = 1; col <= 4 - row; col = col + 1)
      cout << " ";

    // print *
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  for (row = 4; row >= 1; row = row - 1) {

    // print space
    for (col = 1; col <= 4 - row; col = col + 1)
      cout << " ";

    // print *
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  return 0;
}

/*

   *
  * *
 * * *
* * * *
* * * *
 * * *
  * *
   *

*/