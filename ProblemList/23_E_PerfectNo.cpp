/*
Author : Mihir Raj Singh
Title : Perfect No
Date & Time : 2025-04-05 18:10:59
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// Find sum of proper divisor
int sumProperDivisor(int num) {
  int sum = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }
  return sum;
}

// Check for perfect number
void isPerfect(int num) {
  (sumProperDivisor(num) == num) ? cout << "Perfect." << endl
                                 : cout << "Not Perfect." << endl;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a num: ";
  cin >> num;
  isPerfect(num);
  return 0;
}
