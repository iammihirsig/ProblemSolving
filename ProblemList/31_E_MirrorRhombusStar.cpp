/*
Author : Mihir Raj Singh
Title : Mirror Rhombus Star Pattern
Date & Time : 2025-04-05 21:01:15
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printMirrorRhombusStar(int row) {
  for (int i = 0; i < row; i++) {
    // Print space
    for (int j = 0; j < i; j++) {
      cout << "  ";
    }

    // Print normal star pattern
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
  printMirrorRhombusStar(row);
  return 0;
}
