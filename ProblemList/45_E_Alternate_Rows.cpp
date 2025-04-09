/*
Author : Mihir Raj Singh
Title : Print 1, 0 number pattern at alternate rows
Date & Time : 2025-04-09 16:03:54
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Alternate_Rows(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i % 2 == 0) {
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
  cout << "Enter row and col seperated by space: ";
  cin >> row >> col;
  print_Alternate_Rows(row, col);
  return 0;
}
