/*
Author : Mihir Raj Singh
Title : Diamond Star Pattern
Date & Time : 2025-04-09 13:45:53
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Diamond_Star(int row) {

  // Print upper half of diamond
  for (int i = 0; i < row; i++) {
    // Print Prior Space
    for (int j = 0; j <= row - i; j++) {
      cout << "  ";
    }

    // Print inverted pyramid
    for (int j = 0; j < (2 * i) + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  // Print lower half of diamond
  for (int i = 1; i < row; i++) {
    // Print Prior Space
    for (int j = 0; j <= i + 1; j++) {
      cout << "  ";
    }

    // Print inverted pyramid
    for (int j = 0; j < 2 * (row - i) - 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {
  int row;
  cout << "Enter no of rows: ";
  cin >> row;
  print_Diamond_Star(row);
  return 0;
}
