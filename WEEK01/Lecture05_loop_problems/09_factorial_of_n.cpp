#include <iostream>
using namespace std;

int main() {
  int n, i;

  cout << "Enter the number: ";
  cin >> n;

  int fact = 1;
  for (i = 1; i <= n; i = i + 1) {
    fact = fact * i;
  }

  cout << "Factorial is: " << fact << endl;

  return 0;
}