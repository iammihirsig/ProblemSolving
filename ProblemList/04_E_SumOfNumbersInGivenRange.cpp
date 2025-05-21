/*
Author : Mihir Raj Singh
Title : Find the sum of numbers in a given range
Date & Time : 2025-05-21 11:36:19
Time Complexity : O(1)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// sumOfNNaturalNumbers returns the sum of n natural numbers
int sumOfNNaturalNumbers(int val)
{
  int sum = (val * (val + 1) / 2);
  return sum;
}

// printRangeSum find & print the range sum between two natural numbers
void printRangeSum(int val1, int val2)
{
  // find sum till val2
  int sumTillVal2 = sumOfNNaturalNumbers(val2);
  // find sum till val1 - 1
  int sumTillVal1Minus1 = sumOfNNaturalNumbers(val1 - 1);

  // subtraction to find rangesum
  int rangeSum = sumTillVal2 - sumTillVal1Minus1;
  cout << "Sum from \"" << val1 << "\" to \"" << val2 << "\" is: " << rangeSum << endl;
}

int main()
{
  int firstNumber, lastNumber;
  cout << "Enter First & Last Number: ";
  cin >> firstNumber >> lastNumber;
  printRangeSum(firstNumber, lastNumber);
  return 0;
}
