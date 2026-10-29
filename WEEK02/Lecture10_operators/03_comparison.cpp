
#include <iostream>
#include <string>
using namespace std;

int main() {

  // ==========================================
  // 1. EQUAL TO (==)
  // Checks whether two values are equal.
  // ==========================================

  int a = 10;
  int b = 10;
  int c = 5;

  cout << (a == b) << endl; // 1 (true)
  cout << (a == c) << endl; // 0 (false)

  // ==========================================
  // 2. NOT EQUAL TO (!=)
  // Checks whether two values are different.
  // ==========================================

  cout << (a != b) << endl; // 0 (false)
  cout << (a != c) << endl; // 1 (true)

  // ==========================================
  // 3. GREATER THAN (>)
  // Checks whether the left value is larger.
  // ==========================================

  cout << (10 > 5) << endl;  // 1 (true)
  cout << (5 > 10) << endl;  // 0 (false)
  cout << (10 > 10) << endl; // 0 (false)

  // ==========================================
  // 4. LESS THAN (<)
  // Checks whether the left value is smaller.
  // ==========================================

  cout << (5 < 10) << endl;  // 1 (true)
  cout << (10 < 5) << endl;  // 0 (false)
  cout << (10 < 10) << endl; // 0 (false)

  // ==========================================
  // 5. GREATER THAN OR EQUAL TO (>=)
  // True when the left value is greater or equal.
  // ==========================================

  cout << (10 >= 10) << endl; // 1 (true)
  cout << (15 >= 10) << endl; // 1 (true)
  cout << (5 >= 10) << endl;  // 0 (false)

  // ==========================================
  // 6. LESS THAN OR EQUAL TO (<=)
  // True when the left value is smaller or equal.
  // ==========================================

  cout << (5 <= 10) << endl;  // 1 (true)
  cout << (10 <= 10) << endl; // 1 (true)
  cout << (15 <= 10) << endl; // 0 (false)

  // ==========================================
  // 7. COMPARING VARIABLES
  // ==========================================

  int age = 22;
  int minimumAge = 18;

  cout << (age >= minimumAge) << endl; // 1

  // ==========================================
  // 8. USING COMPARISON WITH IF-ELSE
  // ==========================================

  int number = 20;

  if (number > 10) {
    cout << "Number is greater than 10" << endl;
  } else {
    cout << "Number is 10 or less" << endl;
  }

  // ==========================================
  // 9. CHECKING EQUALITY
  // ==========================================

  int password = 1234;
  int enteredPassword = 1234;

  if (password == enteredPassword) {
    cout << "Correct password" << endl;
  } else {
    cout << "Incorrect password" << endl;
  }

  // ==========================================
  // 10. COMPARING TWO NUMBERS
  // ==========================================

  int first = 25;
  int second = 40;

  if (first > second) {
    cout << "First number is greater" << endl;
  } else if (first < second) {
    cout << "Second number is greater" << endl;
  } else {
    cout << "Both numbers are equal" << endl;
  }

  // ==========================================
  // 11. COMPARING DECIMAL NUMBERS
  // ==========================================

  double price1 = 99.50;
  double price2 = 120.75;

  cout << (price1 < price2) << endl;  // 1
  cout << (price1 == price2) << endl; // 0

  // ==========================================
  // 12. COMPARING CHARACTERS
  // ==========================================

  char letter1 = 'A';
  char letter2 = 'B';

  cout << (letter1 == letter2) << endl; // 0
  cout << (letter1 < letter2) << endl;  // 1

  // ==========================================
  // 13. COMPARING STRINGS
  // ==========================================

  string name1 = "Gobi";
  string name2 = "Gobi";
  string name3 = "Alex";

  cout << (name1 == name2) << endl; // 1
  cout << (name1 != name3) << endl; // 1

  // ==========================================
  // 14. PRACTICAL AGE CHECK
  // ==========================================

  int userAge = 26;

  if (userAge >= 18) {
    cout << "Adult" << endl;
  } else {
    cout << "Minor" << endl;
  }

  // ==========================================
  // 15. CHECKING A PASSING MARK
  // ==========================================

  int marks = 65;
  int passingMarks = 40;

  if (marks >= passingMarks) {
    cout << "You passed!" << endl;
  } else {
    cout << "You failed!" << endl;
  }

  return 0;
}
