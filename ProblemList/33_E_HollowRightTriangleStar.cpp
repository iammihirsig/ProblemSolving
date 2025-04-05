/*
Author : Mihir Raj Singh
Title : Hollow Right Triangle Star
Date & Time : 2025-04-05 22:23:24
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printHollowRightTriangleStar(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || i == 0 || i == row - 1 || i == j) {
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
  printHollowRightTriangleStar(row);
  return 0;
}
