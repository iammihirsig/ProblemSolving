/*
Author : Mihir Raj Singh
Title : Print circle box number pattern with 1 and 0
Date & Time : 2025-04-09 17:53:13
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Circle_Box(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      // Print corner element
      if ((i == 0 || i == row - 1) && (j == 0 || j == row - 1)) {
        cout << "0";
      } else if (i == 0 || i == row - 1 || j == 0 || j == row - 1) {
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
  print_Circle_Box(row, col);
  return 0;
}
