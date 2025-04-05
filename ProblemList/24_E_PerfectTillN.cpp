/*
Author : Mihir Raj Singh
Title : Perfect No Till N
Date & Time : 2025-04-05 18:17:15
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
bool isPerfect(int num) {
  return (sumProperDivisor(num) == num) ? true : false;
}

// Print Perfect Number Till N
void printPerfect(int num) {
  for (int i = 1; i <= num; i++) {
    if (isPerfect(i)) {
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
  printPerfect(num);
  return 0;
}
