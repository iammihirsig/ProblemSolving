/*
Author : Mihir Raj Singh
Title : Strong Number
Date & Time : 2025-04-05 18:29:37
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// Find factorial
long long int factorial(int num) {
  long long int facto = 1;
  for (int i = 1; i <= num; i++) {
    facto *= i;
  }
  return facto;
}

// Check if number is strong number
void isStrongNumber(int num) {
  int temp = num;
  long long int factorialSum = 0;
  while (num > 0) {
    factorialSum += factorial(num % 10);
    num /= 10;
  }

  // Print output
  (factorialSum == temp) ? cout << "Strong Number." << endl
                         : cout << "Not a Strong Number." << endl;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a Number: ";
  cin >> num;
  isStrongNumber(num);
  return 0;
}
