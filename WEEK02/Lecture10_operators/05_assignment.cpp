
#include <iostream>
using namespace std;

int main() {

  // ==========================================
  // 1. SIMPLE ASSIGNMENT (=)
  // Assign a value to a variable.
  // ==========================================

  int a = 10;

  cout << "Initial value: " << a << endl; // 10

  a = 20; // Replace the old value with 20.

  cout << "After assignment: " << a << endl; // 20

  // ==========================================
  // 2. ADD AND ASSIGN (+=)
  // Same as: a = a + value
  // ==========================================

  int addition = 10;

  addition += 5; // 10 + 5 = 15

  cout << "After += : " << addition << endl; // 15

  // ==========================================
  // 3. SUBTRACT AND ASSIGN (-=)
  // Same as: a = a - value
  // ==========================================

  int subtraction = 20;

  subtraction -= 5; // 20 - 5 = 15

  cout << "After -= : " << subtraction << endl; // 15

  // ==========================================
  // 4. MULTIPLY AND ASSIGN (*=)
  // Same as: a = a * value
  // ==========================================

  int multiplication = 5;

  multiplication *= 4; // 5 * 4 = 20

  cout << "After *= : " << multiplication << endl; // 20

  // ==========================================
  // 5. DIVIDE AND ASSIGN (/=)
  // Same as: a = a / value
  // ==========================================

  int division = 20;

  division /= 4; // 20 / 4 = 5

  cout << "After /= : " << division << endl; // 5

  // Integer division discards the fractional part.
  int decimalDivision = 7;

  decimalDivision /= 2;

  cout << "Integer division: " << decimalDivision << endl; // 3

  // ==========================================
  // 6. MODULUS AND ASSIGN (%=)
  // Same as: a = a % value
  // ==========================================

  int remainder = 17;

  remainder %= 5; // 17 % 5 = 2

  cout << "After %= : " << remainder << endl; // 2

  // ==========================================
  // 7. BITWISE AND ASSIGN (&=)
  // Performs bitwise AND, then assigns the result.
  // ==========================================

  int bitAnd = 5; // Binary: 0101

  bitAnd &= 3; // 0101 & 0011 = 0001

  cout << "After &= : " << bitAnd << endl; // 1

  // ==========================================
  // 8. BITWISE OR ASSIGN (|=)
  // Performs bitwise OR, then assigns the result.
  // ==========================================

  int bitOr = 5; // Binary: 0101

  bitOr |= 3; // 0101 | 0011 = 0111

  cout << "After |= : " << bitOr << endl; // 7

  // ==========================================
  // 9. BITWISE XOR ASSIGN (^=)
  // Performs bitwise XOR, then assigns the result.
  // ==========================================

  int bitXor = 5; // Binary: 0101

  bitXor ^= 3; // 0101 ^ 0011 = 0110

  cout << "After ^= : " << bitXor << endl; // 6

  // ==========================================
  // 10. LEFT SHIFT AND ASSIGN (<<=)
  // Shifts bits to the left.
  // ==========================================

  int leftShift = 5; // Binary: 0101

  leftShift <<= 1; // Binary: 1010 = 10

  cout << "After <<= : " << leftShift << endl; // 10

  // ==========================================
  // 11. RIGHT SHIFT AND ASSIGN (>>=)
  // Shifts bits to the right.
  // ==========================================

  int rightShift = 8; // Binary: 1000

  rightShift >>= 1; // Binary: 0100 = 4

  cout << "After >>= : " << rightShift << endl; // 4

  // ==========================================
  // 12. PRACTICAL EXAMPLE: SHOPPING BILL
  // ==========================================

  int totalPrice = 1000;

  totalPrice += 200; // Add another purchase.
  totalPrice -= 100; // Apply a discount.

  cout << "Final price: " << totalPrice << endl; // 1100

  // ==========================================
  // 13. PRACTICAL EXAMPLE: STUDENT SCORE
  // ==========================================

  int score = 50;

  score += 10; // Earn 10 points.
  score += 5;  // Earn another 5 points.
  score -= 3;  // Lose 3 points.

  cout << "Final score: " << score << endl; // 62

  // ==========================================
  // 14. ASSIGNMENT CHAINING
  // Assignment groups from right to left.
  // ==========================================

  int x, y, z;

  x = y = z = 100;

  cout << "x = " << x << endl; // 100
  cout << "y = " << y << endl; // 100
  cout << "z = " << z << endl; // 100

  // ==========================================
  // 15. ASSIGNMENT WITH DECIMAL NUMBERS
  // ==========================================

  double price = 99.50;

  price += 10.25;

  cout << "Updated price: " << price << endl; // 109.75

  price *= 2;

  cout << "Doubled price: " << price << endl; // 219.5

  return 0;
}
