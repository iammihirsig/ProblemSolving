/*
Author : Mihir Raj Singh
Title : Hollow Square Star Pattern
Date & Time : 2025-04-05 20:12:30
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printHollowSquareStar(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      if (i == 0 || i == row - 1 || j == 0 || j == row - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
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
  printHollowSquareStar(row);
  return 0;
}
