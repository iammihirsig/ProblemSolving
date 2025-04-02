/*
Author : Mihir Raj Singh
Title : Maximum Number Among 3
Date & Time : 2025-04-02 10:48:43
*/

#include <algorithm>
#include <iostream>
using namespace std;

// Function definition and declaration starts

// Function definition and declaration ends

int main() {
  int num1, num2, num3;
  cout << "Enter all 3 numbers seperated by space: ";
  cin >> num1 >> num2 >> num3;
  cout << "Max is: " << max(num1, max(num2, num3));
  return 0;
}
