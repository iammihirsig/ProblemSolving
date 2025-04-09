/*
Author : Mihir Raj Singh
Title : Box With Center Plus Pattern
Date & Time : 2025-04-09 17:05:08
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Box_With_CenterPlus(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i == row / 2 || j == col / 2) {
        cout << "0";
      } else {
        cout << "1";
      }
    }
    cout << endl;
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {
  int row, col;
  cout << "Enter row and col: ";
  cin >> row >> col;
  print_Box_With_CenterPlus(row, col);
  return 0;
}
