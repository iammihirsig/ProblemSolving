/*
Acthor : Mihir Raj Singh
Title : Plus Pattern
Date & Time : 2025-04-09 15:10:11
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Plus_Pattern(int row) {

  // Print top plus
  for (int i = 0; i < (2 * row) - 1; i++) {
    for (int j = 0; j < row; j++) {
      if ((j == row - 1) && (i % 2 != 0) != 0) {
        cout << "+ ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  // Print series
  for (int i = 0; i < (row * 2) - 1; i++) {
    cout << "+ ";
  }
  cout << endl;

  // Print bottom plus
  for (int i = 0; i < (2 * row) - 1; i++) {
    for (int j = 0; j < row; j++) {
      if ((j == row - 1) && (i % 2 != 0) != 0) {
        cout << "+ ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}
// Function definition and declaration ends

int main() {
  int row;
  cout << "Enter no of rows: ";
  cin >> row;
  print_Plus_Pattern(row);
  return 0;
}
