/*
Author : Mihir Raj Singh
Title : Print the sum of n natural numbers
Date & Time : 2025-05-21 11:23:49
Time Complexity : O(1)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printSumOfNNaturalNumbers prints the sum of n natural numbers
void printSumOfNNaturalNumbers(int val)
{
  int sum = (val * (val + 1) / 2);
  cout << "Sum Of \"" << val << "\" Natural Number is : " << sum << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  printSumOfNNaturalNumbers(inputNumber);
  return 0;
}
