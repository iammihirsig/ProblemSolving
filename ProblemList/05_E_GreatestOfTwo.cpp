/*
Author : Mihir Raj Singh
Title : Output the greatest number of two input numbers
Date & Time : 2025-05-21 11:50:06
Time Complexity : O(1)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printGreatestOfTwo print the number which is greater among two user given input numbers
void printGreatestOfTwo(int val1, int val2)
{
  int output;
  output = (val1 > val2) ? val1 : val2;
  cout << "Greatest Number Among \"" << val1 << "\" and \"" << val2 << "\" is : " << output << endl;
}

int main()
{
  int firstNumber, secondNumber;
  cout << "Enter first and second number: ";
  cin >> firstNumber >> secondNumber;
  printGreatestOfTwo(firstNumber, secondNumber);
  return 0;
}
