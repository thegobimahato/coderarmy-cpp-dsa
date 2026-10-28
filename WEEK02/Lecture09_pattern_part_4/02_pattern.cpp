#include <iostream>
using namespace std;

int main() {
  int row, col;
  int n;
  cout << "Enter the number: ";
  cin >> n;

  for (row = 1; row <= n; row = row + 1) {

    // print space
    for (col = 1; col <= n - row; col = col + 1) {
      cout << "  ";
    }

    // print 1 to row, increase
    for (col = 1; col <= row; col = col + 1) {
      cout << col << " ";
    }

    // print row - 1 to 1, decrease 
    for (col = row - 1; col >= 1; col = col - 1) {
      cout << col << " ";
    }

    cout << endl;
  }

  return 0;
}

/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/