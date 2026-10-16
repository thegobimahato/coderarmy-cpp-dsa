#include <iostream>
using namespace std;

int main() {
  int n, pow, i;
  cout << "Enter the number : ";
  cin >> n;
  cout << "Enter the power : ";
  cin >> pow;

  int num = n;
  for (i = 1; i < pow; i = i + 1) {
    num = num * n;
  }

  cout << "The power is : " << num << endl;

  return 0;
}