/*
Author : Mihir Raj Singh
Title : Digit Count Of A Number
Date & Time : 2025-04-02 11:55:28
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
int countDigit(int num) {
  int count = 0;
  while (num > 0) {
    count++;
    num /= 10;
  }
  return count;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  int ans = countDigit(num);
  cout << "Number of digits are: " << ans << endl;
  return 0;
}
