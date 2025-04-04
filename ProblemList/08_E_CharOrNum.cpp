/*
Author : Mihir Raj Singh
Title : Character or Number
Date & Time : 2025-04-03 10:55:27
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// Function definition and declaration ends

int main() {
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) {
    cout << "Character is Alphabet";
  } else if (ch >= 48 && ch <= 57) {
    cout << "Character is Digit";
  } else {
    cout << "Character is Special Character";
  }
  return 0;
}
