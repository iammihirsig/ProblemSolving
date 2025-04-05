/*
Author : Mihir Raj Singh
Title : Square Star Pattern
Date & Time : 2025-04-05 20:04:32
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void printSquareStar(int noOfRow) {
  for (int i = 0; i < noOfRow; i++) {
    for (int j = 0; j < noOfRow; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  cout << endl;
}
// Function definition and declaration ends

int main() {
  int noOfRow;
  cout << "Enter no of rows: ";
  cin >> noOfRow;
  printSquareStar(noOfRow);
  return 0;
}
