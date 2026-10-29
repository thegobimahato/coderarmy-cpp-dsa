
#include <iostream>
using namespace std;

int main() {

  // ==========================================
  // 1. BITWISE AND (&)
  // A result bit is 1 only when both bits are 1.
  // ==========================================

  int a = 5; // Binary: 0101
  int b = 3; // Binary: 0011

  cout << "Bitwise AND: " << (a & b) << endl; // 1

  // Binary:
  //   0101  (5)
  // & 0011  (3)
  // -------
  //   0001  (1)

  // ==========================================
  // 2. BITWISE OR (|)
  // A result bit is 1 when either bit is 1.
  // ==========================================

  cout << "Bitwise OR: " << (a | b) << endl; // 7

  // Binary:
  //   0101  (5)
  // | 0011  (3)
  // -------
  //   0111  (7)

  // ==========================================
  // 3. BITWISE XOR (^)
  // A result bit is 1 when the bits are different.
  // ==========================================

  cout << "Bitwise XOR: " << (a ^ b) << endl; // 6

  // Binary:
  //   0101  (5)
  // ^ 0011  (3)
  // -------
  //   0110  (6)

  cout << (5 ^ 5) << endl; // 0: identical bits become 0
  cout << (5 ^ 0) << endl; // 5: XOR with 0 keeps the value

  // ==========================================
  // 4. BITWISE NOT (~)
  // Flips every bit of the integer.
  // ==========================================

  cout << "Bitwise NOT: " << (~a) << endl; // -6

  // For a typical 32-bit int:
  // 5  = 00000000 ... 00000101
  // ~5 = 11111111 ... 11111010
  //
  // On typical modern C++ systems, ~5 equals -6.
  // NOT does not simply change positive 5 to 0.

  // ==========================================
  // 5. LEFT SHIFT (<<)
  // Shifts the bits toward the left.
  // ==========================================

  cout << "Left shift by 1: " << (5 << 1) << endl; // 10
  cout << "Left shift by 2: " << (5 << 2) << endl; // 20

  // 5 in binary: 0101
  // Shift left by 1: 1010 = 10
  // Shift left by 2: 10100 = 20

  // ==========================================
  // 6. RIGHT SHIFT (>>)
  // Shifts the bits toward the right.
  // ==========================================

  cout << "Right shift by 1: " << (8 >> 1) << endl; // 4
  cout << "Right shift by 2: " << (8 >> 2) << endl; // 2

  // 8 in binary: 1000
  // Shift right by 1: 0100 = 4
  // Shift right by 2: 0010 = 2

  // ==========================================
  // 7. BITWISE OPERATORS WITH VARIABLES
  // ==========================================

  int x = 12; // Binary: 1100
  int y = 10; // Binary: 1010

  cout << "12 & 10: " << (x & y) << endl; // 8
  cout << "12 | 10: " << (x | y) << endl; // 14
  cout << "12 ^ 10: " << (x ^ y) << endl; // 6

  // ==========================================
  // 8. COMPOUND BITWISE ASSIGNMENT
  // ==========================================

  int number = 5;

  number &= 3;                             // Same as number = number & 3
  cout << "After &= : " << number << endl; // 1

  number = 5;
  number |= 3;                             // Same as number = number | 3
  cout << "After |= : " << number << endl; // 7

  number = 5;
  number ^= 3;                             // Same as number = number ^ 3
  cout << "After ^= : " << number << endl; // 6

  number = 5;
  number <<= 1;                             // Same as number = number << 1
  cout << "After <<= : " << number << endl; // 10

  number = 8;
  number >>= 1;                             // Same as number = number >> 1
  cout << "After >>= : " << number << endl; // 4

  // ==========================================
  // 9. CHECK WHETHER A NUMBER IS ODD OR EVEN
  // The lowest bit is 1 for odd numbers.
  // ==========================================

  int value = 7;

  if ((value & 1) == 1) {
    cout << value << " is odd" << endl;
  } else {
    cout << value << " is even" << endl;
  }

  // Try value = 8 to test an even number.

  // ==========================================
  // 10. CHECK WHETHER A PARTICULAR BIT IS SET
  // Bits are numbered starting at position 0
  // from the right.
  // ==========================================

  int flags = 5; // Binary: 0101

  // Check bit position 0.
  if ((flags & (1 << 0)) != 0) {
    cout << "Bit 0 is ON" << endl;
  }

  // Check bit position 1.
  if ((flags & (1 << 1)) != 0) {
    cout << "Bit 1 is ON" << endl;
  } else {
    cout << "Bit 1 is OFF" << endl;
  }

  // Bit positions for 5 (0101):
  // Position 2 = 1 (ON)
  // Position 1 = 0 (OFF)
  // Position 0 = 1 (ON)

  return 0;
}
