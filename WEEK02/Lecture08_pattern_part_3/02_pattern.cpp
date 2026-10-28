#include <iostream>
using namespace std;

int main() {
  int row, col, n;
  cout << "Enter the number: ";
  cin >> n;

  for (row = 1; row <= n; row = row + 1) {

    // print space
    for (col = 1; col <= n - row; col = col + 1) {
      cout << "  ";
    }

    // print row number
    for (col = 1; col <= row; col = col + 1) {
      cout << row << " ";
    }

    cout << endl;
  }

  return 0;
}

/*

      1
    2 2
  3 3 3
4 4 4 4

*/