/*
Author : Mihir Raj Singh
Title : Pyramid Star Pattern
Date & Time : 2025-04-09 12:10:15
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_pyramid_star(int row) {
  for (int i = 0; i < row; i++) {
    // Print space
    for (int j = 0; j < row - i; j++) {
      cout << "  ";
    }

    // Print normal star pattern at odd terms
    for (int j = 0; j < (2 * i) + 1; j++) {
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
  print_pyramid_star(row);
  return 0;
}
