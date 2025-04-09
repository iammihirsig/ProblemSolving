/*
Author : Mihir Raj Singh
Title : Cross Pattern
Date & Time : 2025-04-09 15:34:13
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Cross_Pattern(int row) {
  for (int i = 1; i <= 2 * row - 1; i++) {
    for (int j = 1; j <= 2 * row - 1; j++) {
      if (j == i || (j == 2 * row - i)) {
        cout << "*";
      } else {
        cout << " ";
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
  print_Cross_Pattern(row);
  return 0;
}
