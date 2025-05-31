/*
Author : Mihir Raj Singh
Title : Find the sum of digits of a user given number
Date & Time : 2025-05-21 13:37:01
Time Complexity : log(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printSumOfDigits calculate and print sum of digit of user given number
void printSumOfDigits(int val)
{
  int sum = 0;
  while (val > 0)
  {
    sum += val % 10;
    val /= 10;
  }
  cout << "Sum Of Digit is: " << sum << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  printSumOfDigits(inputNumber);
  return 0;
}
