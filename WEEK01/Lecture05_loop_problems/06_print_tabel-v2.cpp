#include <iostream>
using namespace std;

int main() {
  int n, i;
  cout << "Enter the table: ";
  cin >> n;

  for (i = n; i <= n * 10; i = i + n) {
    cout << i << endl;
  }

  cout << endl;

  return 0;
}