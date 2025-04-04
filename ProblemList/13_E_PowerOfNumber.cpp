/*
Author : Mihir Raj Singh
Title : Power Of a Number
Date & Time : 2025-04-04 16:04:14
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts
long long int findPower(int num, int power) {
  long long int ans = 1;
  for (int i = 0; i < power; i++) {
    ans *= num;
  }
  return ans;
}

// Function definition and declaration ends

int main() {
  int num, power;
  cout << "Enter a number and it's power seperated by space: ";
  cin >> num >> power;
  long long int ans = findPower(num, power);
  cout << "Power is: " << ans << endl;
  return 0;
}
