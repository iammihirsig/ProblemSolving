/*
Author : Mihir Raj Singh
Title : Sum Of First & Last Digit
Date & Time : 2025-04-04 15:31:12
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
int firstAndLastDigitSum(int num) {
  // find last digit
  int lastDigit = num % 10;
  int firstDigit = num;

  // Find First Digit
  while (num > 10) // We Make Sure Only Single Digit Number Left
  {
    num /= 10;
  }
  firstDigit = num;
  return (firstDigit + lastDigit);
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int ans = firstAndLastDigitSum(num);
  cout << "First and Last Digit Sum Of " << num << " is: " << ans << endl;
  return 0;
}
