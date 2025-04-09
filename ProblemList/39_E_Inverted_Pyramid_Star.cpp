/*
Author : Mihir Raj Singh
Title : Inverted Pyramid Star Pattern
Date & Time : 2025-04-09 13:16:28
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Inverted_Pyramid_Star(int row) {
  for (int i = 0; i < row; i++) {
    // Print space
    for (int j = 1; j <= i; j++) {
      cout << "  ";
    }

    // Print reverse pyramid
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
  print_Inverted_Pyramid_Star(row);
  return 0;
}
