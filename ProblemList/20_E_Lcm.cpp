/*
Author : Mihir Raj Singh
Title : LCM Of 2 Numbers
Date & Time : 2025-04-05 09:39:16
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// find GCD
int findGCD(int a, int b) { return (b == 0) ? a : findGCD(b, a % b); }

// find LCM
int findLCM(int a, int b) {
  // We know product of a,b is equal to product of lcm and hcf of a and b
  int gcd = findGCD(a, b);
  return (a / gcd) * b;
}
// Function definition and declaration ends

int main() {
  int num1, num2;
  cout << "Enter 2 numbers seperated by space: ";
  cin >> num1 >> num2;
  int ans = findLCM(num1, num2);
  cout << "LCM : " << ans << endl;
  return 0;
}
