/*
Author : Mihir Raj Singh
Title : Check if number is positive, negative or zero
Date & Time : 2025-05-21 10:35:13
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// printClassification prints the status received according to classifyNumber (Zero, Postive, Negative)
void printClassification(int val)
{
  string output;
  output = (val >= 1) ? "Positive" : ((val < 0) ? "Negative" : "Zero");
  cout << "Input Number \"" << val << "\" is : " << output << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  printClassification(inputNumber);
  return 0;
}
