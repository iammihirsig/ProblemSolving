/*
Author : Mihir Raj Singh
Title : Fibonacci Series Upto N Terms
Date & Time : 2025-04-04 16:14:24
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
void FibonacciUptoN(int n) {
  int firstTerm = 0, secondTerm = 1, newTerm;
  for (int i = 0; i < n; i++) {
    cout << firstTerm;
    if (i == (n - 1)) {
      cout << ".";
    } else {
      cout << ", ";
    }
    newTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = newTerm;
  }
}
// Function definition and declaration ends

int main() {
  int n;
  cout << "Enter the nth term: ";
  cin >> n;
  FibonacciUptoN(n);
  return 0;
}
