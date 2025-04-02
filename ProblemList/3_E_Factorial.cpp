/*
Author : Mihir Raj Singh
Title : Factorial Of Num
Date & Time : 2025-04-02 11:51:10
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
int findFactorial(int num) {
  int ans = 1;
  for (int i = 1; i <= num; i++) {
    ans *= i;
  }
  return ans;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter No: ";
  cin >> num;
  int ans = findFactorial(num);
  cout << "Factorial Is: " << ans << endl;
  return 0;
}
