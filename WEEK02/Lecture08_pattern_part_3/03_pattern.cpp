#include <iostream>
using namespace std;

int main() {
  int row, col;

  for (row = 1; row <= 5; row = row + 1) {

    // print space
    for (col = 1; col <= 5 - row; col = col + 1) {
      cout << "  ";
    }
    // print row number
    for (col = 1; col <= row; col = col + 1) {
      cout << col << " ";
    }

    cout << endl;
  }

  return 0;
}

/*

        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

*/