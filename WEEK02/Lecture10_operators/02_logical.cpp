
#include <iostream>
using namespace std;

int main() {

  // ==========================================
  // 1. LOGICAL AND (&&)
  // Both conditions must be true.
  // ==========================================

  int age = 22;

  cout << (age >= 18 && age <= 30) << endl; // 1 (true)
  cout << (age >= 18 && age <= 20) << endl; // 0 (false)

  // Example: Check eligibility for a driving license.
  int licenseAge = 25;
  bool hasDocuments = true;

  cout << (licenseAge >= 18 && hasDocuments) << endl; // 1

  // ==========================================
  // 2. LOGICAL OR (||)
  // At least one condition must be true.
  // ==========================================

  int number = 7;

  cout << (number == 5 || number == 7) << endl; // 1
  cout << (number == 3 || number == 9) << endl; // 0

  // Example: A discount applies to either condition.
  int shoppingAmount = 1500;
  bool isMember = false;

  cout << (shoppingAmount >= 2000 || isMember) << endl; // 0

  // ==========================================
  // 3. LOGICAL NOT (!)
  // Reverses a boolean value.
  // ==========================================

  bool isRaining = true;

  cout << !isRaining << endl; // 0 (false)

  bool isLoggedIn = false;

  cout << !isLoggedIn << endl; // 1 (true)

  // Example: Check whether a user is NOT logged in.
  if (!isLoggedIn) {
    cout << "Please log in." << endl;
  }

  // ==========================================
  // 4. COMBINE AND (&&) WITH OR (||)
  // ==========================================

  int studentAge = 20;
  bool hasStudentID = true;

  // Must be 18+ AND have a student ID.
  cout << (studentAge >= 18 && hasStudentID) << endl; // 1

  // Eligible if under 18 OR has a student ID.
  cout << (studentAge < 18 || hasStudentID) << endl; // 1

  // Both conditions must be true.
  cout << (studentAge >= 18 && studentAge <= 25) << endl; // 1

  // ==========================================
  // 5. CHECK EVEN AND WITHIN A RANGE
  // ==========================================

  int value = 24;

  // The number must be even AND between 10 and 30.
  if (value % 2 == 0 && value >= 10 && value <= 30) {
    cout << "Even number within range" << endl;
  }

  // The number must be less than 0 OR greater than 100.
  if (value < 0 || value > 100) {
    cout << "Number is outside the range" << endl;
  } else {
    cout << "Number is within the range" << endl;
  }

  // ==========================================
  // 6. LOGIN VALIDATION
  // ==========================================

  string username = "gobi";
  string password = "cpp123";

  // Both username AND password must match.
  if (username == "gobi" && password == "cpp123") {
    cout << "Login successful" << endl;
  } else {
    cout << "Invalid credentials" << endl;
  }

  // ==========================================
  // 7. BOOLEAN COMBINATIONS
  // ==========================================

  bool a = true;
  bool b = false;

  cout << (a && b) << endl; // 0
  cout << (a || b) << endl; // 1
  cout << (!a) << endl;     // 0
  cout << (!b) << endl;     // 1

  // Parentheses make combined conditions clearer.
  cout << ((a || b) && !b) << endl; // 1

  return 0;
}
