/*
Author : Mihir Raj Singh
Title : Right Triangle Star Pattern
Date & Time : 2025-04-05 21:44:37
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printRightTriangleStar(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j <= i; j++) {
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
  printRightTriangleStar(row);
  return 0;
}
