/*
Author : Mihir Raj Singh
Title : ChessBoard Pattern
Date & Time : 2025-04-09 16:42:21
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_ChessBoard_Pattern(int row, int col) {
  int k = 1;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << k;
      k ^= 1; // Altering K value (0,1)
    }
    cout << endl;
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {
  int row, col;
  cout << "Enter no of row and col:";
  cin >> row >> col;
  print_ChessBoard_Pattern(row, col);
  return 0;
}
