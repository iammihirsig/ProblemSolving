/*
Author : Mihir Raj Singh
Title : Inverted Right Triangle Star Pattern
Date & Time : 2025-04-09 10:30:48
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void print_Inverted_Right_Triangle_Star(int row) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row - i; j++) {
      cout << "* ";
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
  print_Inverted_Right_Triangle_Star(row);
  return 0;
}
