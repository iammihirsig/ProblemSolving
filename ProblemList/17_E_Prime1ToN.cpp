/*
Author : Mihir Raj Singh
Title : Prime 1 To N
Date & Time : 2025-04-04 17:24:26
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// Check For Prime
bool isPrime(int num) {
  if (num == 1)
    return false;

  bool flag = true;

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}

// Print Prime Till N
void printPrimeTillN(int n) {
  for (int i = 1; i <= n; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }
}
// Function definition and declaration ends

int main() {
  int n;
  cout << "Enter the value of N: ";
  cin >> n;
  printPrimeTillN(n);
  return 0;
}
