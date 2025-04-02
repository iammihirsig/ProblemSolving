/*
Author : Mihir Raj Singh
Title : Even Odd
Date & Time : 2025-04-02 10:40:03
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
// Function definition and declaration ends

int main() {
  int num;

  cout << "Enter a number: ";
  cin >> num;
  cout << num << " is: " << ((num & 1) == 0 ? "Even." : "Odd");

  return 0;
}
