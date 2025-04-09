/*
Author : Mihir Raj Singh
Title : Mirror Right Triangle Star Pattern
Date & Time : 2025-04-09 10:05:57
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printMirrorRightTriangleStar(int row) {
  for (int i = 0; i < row; i++) {
    // Print space
    for (int j = 0; j < row - i - 1; j++) {
      cout << "  ";
    }

    // Print star
    for (int k = 0; k <= i; k++) {
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
  printMirrorRightTriangleStar(row);
  return 0;
}
