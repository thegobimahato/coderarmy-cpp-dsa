#include <iostream>
using namespace std;

int main() {
  int row, col;

  for (row = 1; row <= 5; row = row + 1) {

    // print space;
    for (col = 1; col <= 5 - row; col = col + 1) {
      cout << "  ";
    }

    // print A to E characters
    for (col = 1; col <= row; col = col + 1) {
      char name = 'A' + col - 1;
      cout << name << " ";
    }

    cout << endl;
  }

  return 0;
}

/*

        A
      A B
    A B C
  A B C D
A B C D E

*/

/*

    // print A to E characters
    for (char name = 'A'; name <= 'A' + row - 1; name = name + 1) {
      cout << name << " ";
    }

*/