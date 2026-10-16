#include <iostream>
using namespace std;

int main() {
  int n, i;

  cout << "Enter the number: ";
  cin >> n;

  int sum = 0;
  for (i = 1; i <= n; i = i + 1) {
    sum = sum + i;
  }

  cout << "Sum is : " << sum << endl;
  cout << (n * (n + 1)) / 2 << endl; // formula for sum of n natural number

  return 0;
}