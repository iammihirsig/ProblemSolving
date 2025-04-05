/*
Author : Mihir Raj Singh
Title : Find GCD Using Euclidean Approach
Date & Time : 2025-04-05 09:32:37
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
int findGCD(int a, int b) {
  // Using Euclidean Approach
  return (b == 0) ? a : findGCD(b, a % b);
}
// Function definition and declaration ends

int main() {
  int num1, num2;
  cout << "Enter 2 Numbers Seperated By Space: ";
  cin >> num1 >> num2;
  int ans = findGCD(num1, num2);
  cout << "GCD Of " << num1 << " and " << num2 << " is: " << ans << endl;
  return 0;
}
