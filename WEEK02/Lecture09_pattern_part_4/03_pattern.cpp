#include <iostream>
using namespace std;

int main() {
  int row, col;
  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (row = n; row >= 1; row = row - 1) {

    // print space
    for (col = 1; col <= n - row; col = col + 1) {
      cout << "  ";
    }

    // print *
    for (col = 1; col <= 2 * row - 1; col = col + 1) {
      cout << "*" << " ";
    }

    cout << endl;
  }

  return 0;
}

/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

/*
    // print space
    for (col = 1; col <= (9 - (2 * row - 1)) / 2; col = col + 1) {
      cout << "  ";
    }

    // print space for n
    for (col = 1; col <= ((2*n -1 ) - (2 * row - 1)) / 2; col = col + 1) {
      cout << "  ";
    }
*/