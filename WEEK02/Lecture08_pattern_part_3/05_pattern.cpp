#include <iostream>
using namespace std;

int main() {
  int row, col;

  for (row = 1; row <= 5; row = row + 1) {

    // print space
    for (col = 1; col <= 5 - row; col = col + 1) {
      cout << "  ";
    }

    // print 5 - 1 numbers
    for (col = row; col >= 1; col = col - 1) {
      cout << col << " ";
    }

    cout << endl;
  }

  return 0;
}

/*

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

*/