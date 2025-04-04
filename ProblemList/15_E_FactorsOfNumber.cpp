/*
Author : Mihir Raj Singh
Title : Factors Of Number
Date & Time : 2025-04-04 16:44:22
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printFactor(int num) {
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cout << i;
      if (i != num) {
        cout << ", ";
      } else {
        cout << ". ";
      }
    }
  }
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  printFactor(num);
  return 0;
}
