/*
Author : Mihir Raj Singh
Title : Reverse A Number
Date & Time : 2025-04-02 12:17:39
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
int reverseNum(int num) {
  int rev = 0;
  while (num > 0) {
    rev = (rev * 10) + (num % 10);
    num /= 10;
  }
  return rev;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int ans = reverseNum(num);
  cout << "Reverse Of " << num << " is: " << ans << endl;
  return 0;
}
