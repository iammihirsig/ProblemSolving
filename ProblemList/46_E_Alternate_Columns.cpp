/*
Author : Mihir Raj Singh
Title : Print 1, 0 number pattern at alternate columns
Date & Time : 2025-04-09 16:17:46
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Alternate_Columns(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j % 2 == 0) {
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
  cout << "Enter row and col:";
  cin >> row >> col;
  print_Alternate_Columns(row, col);
  return 0;
}
