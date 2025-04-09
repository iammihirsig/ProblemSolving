/*
Author : Mihir Raj Singh
Title : Right Arrow Star Pattern
Date & Time : 2025-04-09 14:11:22
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Right_Arrow_Star(int row) {
  // Upper Half
  for (int i = 0; i < row; i++) {
    // Print space
    for (int j = 1; j <= (2 * i); j++) {
      cout << "  ";
    }

    // Inverted Right Triangle
    for (int j = 0; j < row - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  // Lower half
  for (int i = row - 2; i >= 0; i--) { // Start from row - 2 to avoid repetition
    // Print spaces (Formula for mirroring)
    for (int j = 1; j <= (2 * i); j++) {
      cout << "  ";
    }

    // Print Right Triangle
    for (int j = 0; j < row - i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}
// Function definition and declaration ends

int main() {
  int row;
  cout << "Enter no of rows: ";
  cin >> row;
  print_Right_Arrow_Star(row);
  return 0;
}
