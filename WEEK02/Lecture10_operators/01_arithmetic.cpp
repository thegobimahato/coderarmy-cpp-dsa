
#include <iostream>
using namespace std;

int main() {

  // 1. Declare two integer variables
  int a = 10;
  int b = 3;

  // 2. Addition
  cout << "Addition: " << a + b << endl; // 13

  // 3. Subtraction
  cout << "Subtraction: " << a - b << endl; // 7

  // 4. Multiplication
  cout << "Multiplication: " << a * b << endl; // 30

  // 5. Integer division
  cout << "Division: " << a / b << endl; // 3

  // 6. Modulus: gives the remainder
  cout << "Remainder: " << a % b << endl; // 1

  // 7. Arithmetic with direct values
  cout << "Add: " << 20 + 5 << endl;      // 25
  cout << "Subtract: " << 20 - 5 << endl; // 15
  cout << "Multiply: " << 20 * 5 << endl; // 100
  cout << "Divide: " << 20 / 5 << endl;   // 4

  // 8. Decimal division
  double x = 10.0;
  double y = 3.0;

  cout << "Decimal division: " << x / y << endl; // 3.33333

  // 9. Negative numbers
  cout << "Negative result: " << 5 - 10 << endl;         // -5
  cout << "Negative multiplication: " << 5 * -3 << endl; // -15

  // 10. Even or odd using modulus
  int number = 7;

  cout << "Remainder: " << number % 2 << endl; // 1

  // Even numbers have a remainder of 0 when divided by 2.
  if (number % 2 == 0) {
    cout << "Even number" << endl;
  } else {
    cout << "Odd number" << endl;
  }

  // 11. Calculate the average of three numbers
  int mark1 = 80;
  int mark2 = 90;
  int mark3 = 85;

  double average = (mark1 + mark2 + mark3) / 3.0;

  cout << "Average marks: " << average << endl; // 85

  // 12. Calculate the area of a rectangle
  int length = 10;
  int width = 5;

  int area = length * width;

  cout << "Rectangle area: " << area << endl; // 50

  // 13. Find the last digit of a number
  int value = 1234;

  cout << "Last digit: " << value % 10 << endl; // 4

  // 14. Operator precedence
  cout << "Without parentheses: " << 2 + 3 * 4 << endl; // 14

  cout << "With parentheses: " << (2 + 3) * 4 << endl; // 20

  return 0;
}
