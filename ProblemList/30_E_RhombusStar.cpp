/*
Author : Mihir Raj Singh
Title : Rhombus Star Pattern
Date & Time : 2025-04-05 20:50:08
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printRhombusStar(int row) {
  // Print space (row-i-1)
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row - i - 1; j++) {
      cout << "  ";
    }

    // Print normal square
    for (int k = 0; k < row; k++) {
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
  printRhombusStar(row);
  return 0;
}
