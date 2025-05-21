/*
Author : Mihir Raj Singh
Title : Output the greatest of three numbers
Date & Time : 2025-05-21 11:56:46
Time Complexity : O(1)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printGreatestOfThree print the greatest number among 3 user given input numbers
void printGreatestOfThree(int val1, int val2, int val3)
{
  int output;
  output = max(val1, max(val2, val3));
  cout << "Greatest Number Among \"" << val1 << "\", \"" << val2 << "\" and \"" << val3 << "\" is : " << output << endl;
}

int main()
{
  int firstNumber, secondNumber, thirdNumber;
  cout << "Enter all 3 numbers: ";
  cin >> firstNumber >> secondNumber >> thirdNumber;
  printGreatestOfThree(firstNumber, secondNumber, thirdNumber);
  return 0;
}
