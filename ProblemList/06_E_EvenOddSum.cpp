/*
Author : Mihir Raj Singh
Title : Sum Of Even & Odd Numbers Till N
Date & Time : 2025-04-02 12:07:09
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
// NOTE: In order words, these are basically sum of all natural numbers till num
int evenOddSum(int num) {
  int evenSum = 0, oddSum = 0;
  for (int i = 1; i <= num; i++) {
    // even check
    ((i & 1) == 0 ? evenSum += i : oddSum += i);
  }
  return (evenSum + oddSum);
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a Number: ";
  cin >> num;
  int ans = evenOddSum(num);
  cout << "Sum Of Even & Odd Till " << num << " is: " << ans << endl;
  return 0;
}
