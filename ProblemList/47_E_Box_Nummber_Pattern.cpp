/*
Author : Mihir Raj Singh
Title : Print box number pattern of 1s and 0s
Date & Time : 2025-04-09 16:26:21
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Box_Number_Pattern(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i == 0 || j == 0 || i == row - 1 || j == col - 1) {
        cout << "1";
      } else {
        cout << "0";
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
  print_Box_Number_Pattern(row, col);
  return 0;
}
