/*
Author : Mihir Raj Singh
Title : Product Of User Input Digit Of Number
Date & Time : 2025-04-04 15:43:14
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
int ProductOfDigit(int num) {
  int product = 1;
  while (num > 0) {
    product *= num % 10;
    num /= 10;
  }
  return product;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter the number: ";
  cin >> num;
  int ans = ProductOfDigit(num);
  cout << "Product Of Digits Of " << num << " is: " << ans << endl;
  return 0;
}
