/*
Author : Mihir Raj Singh
Title : Prime Factors Of a Number
Date & Time : 2025-04-04 17:33:14
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// Check For Prime
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

// Print Prime Factors
void printPrimeFactor(int num) {
  // 1 can't be a prime factor so let's start with 2
  for (int i = 2; i <= num; i++) {
    // check for factor
    if (num % i == 0) {
      // check for prime
      if (isPrime(i)) {
        cout << i << " ";
      }
    }
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  printPrimeFactor(num);
  return 0;
}
