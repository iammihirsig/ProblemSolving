/*
Author : Mihir Raj Singh
Title : Print box number pattern of 1 and 0 with cross center
Date & Time : 2025-04-09 17:27:26
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Box_With_CrossCenter(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (i == j || (i + j) == col - 1) {
        cout << "1 ";
      } else {
        cout << "0 ";
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
  print_Box_With_CrossCenter(row, col);
  return 0;
}
