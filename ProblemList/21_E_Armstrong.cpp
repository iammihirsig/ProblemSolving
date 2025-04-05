/*
Author : Mihir Raj Singh
Title : Armstrong Number
Date & Time : 2025-04-05 09:54:12
*/

#include <cmath>
#include <iostream>
using namespace std;

// Function definition and declaration starts

// Find Order
int findOrder(int num) {
  int count = 0;
  while (num > 0) {
    count++;
    num /= 10;
  }
  return count;
}

// Check Armstrong
void isArmstrong(int num) {
  int sum = 0, temp = num;
  int order = findOrder(num);
  while (num > 0) {
    sum += pow(num % 10, order);
    num /= 10;
  }

  // Print Output
  (sum == temp) ? cout << "Armstrong." : cout << "Not Armstrong." << endl;
}
// Function definition and declaration ends

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  isArmstrong(num);
  return 0;
}
