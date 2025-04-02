/*
Author : Mihir Raj Singh
Title : Print Alphabets
Date & Time : 2025-04-02 12:00:11
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printAlphabets() {
  // Uppercase
  for (char ch = 'A'; ch <= 'Z'; ch++) {
    cout << ch << " ";
  }
  cout << endl;

  // Lowercase
  for (char ch = 'a'; ch <= 'z'; ch++) {
    cout << ch << " ";
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {

  printAlphabets();
  return 0;
}
