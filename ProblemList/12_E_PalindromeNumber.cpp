/*
Author : Mihir Raj Singh
Title : Palindrome Number
Date & Time : 2025-04-04 15:54:20
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
bool isPalindrome(int num) {
  int rev = 0;
  while (num > rev) {
    rev = (rev * 10) + (num % 10);
    num /= 10;
  }
  return ((rev == num) || (rev / 10) == num);
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  bool ans = isPalindrome(num);
  (ans == true) ? cout << "Number Is Palindrome."
                : cout << "Number Is Not Palindrome.";
  return 0;
}
