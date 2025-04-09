/*
Author : Mihir Raj Singh
Title : Hollow Mirror Right Triangle Star Pattern
Date & Time : 2025-04-09 10:18:50
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Hollow_Mirror_Right_Triangle_Star(int row) {
  for (int i = 0; i < row; i++) {
    // Print prior space
    for (int j = 0; j < row - i - 1; j++) {
      cout << "  ";
    }

    // Print hollow right traingle normally
    for (int j = 0; j <= i; j++) {
      if (i == j || i == 0 || j == 0 || i == row - 1) {
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
  cout << "Enter the no of rows: ";
  cin >> row;
  print_Hollow_Mirror_Right_Triangle_Star(row);
  return 0;
}
