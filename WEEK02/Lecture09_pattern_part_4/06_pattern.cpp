#include <iostream>
using namespace std;

int main() {
  int row, col;

  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (row = 1; row <= n; row = row + 1) {

    // print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    // print space
    for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
      cout << "  ";

    // print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  for (row = n - 1; row >= 1; row = row - 1) {

    // print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    // print space
    for (col = 1; col <= 2 * n - 2 * row; col = col + 1)
      cout << "  ";

    // print star
    for (col = 1; col <= row; col = col + 1)
      cout << "* ";

    cout << endl;
  }

  return 0;
}
/*

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/