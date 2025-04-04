/*
Author : Mihir Raj Singh
Title : Prime Check
Date & Time : 2025-04-04 17:14:11
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
bool isPrime(int num) {
  // Set flag to true
  bool flag = true;

  // Default condition for 1
  if (num == 1)
    return false;

  // Condition for rest of the numbers
  for (int i = 2; i * i <= num; i++) {
    if ((num % i) == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (isPrime(num)) {
    cout << "Prime." << endl;
  } else {

    cout << "Not Prime." << endl;
  }
  return 0;
}
