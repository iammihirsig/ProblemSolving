/*
Author : Mihir Raj Singh
Title : Strong Number Till N
Date & Time : 2025-04-05 18:40:13
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
bool isStrongNumber(int num) {
  int temp = num;
  long long int factorialSum = 0;
  while (num > 0) {
    factorialSum += factorial(num % 10);
    num /= 10;
  }

  // Print output
  return (factorialSum == temp) ? true : false;
}

// Print strong number in range of 1 to num
void printStrongNo(int num) {
  for (int i = 1; i <= num; i++) {
    if (isStrongNumber(i)) {
      cout << i << " ";
    }
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter the value of N: ";
  cin >> num;
  printStrongNo(num);
  return 0;
}
