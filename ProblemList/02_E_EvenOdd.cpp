/*
Author : Mihir Raj Singh
Title : Check if the inputNumber is even or odd
Date & Time : 2025-05-21 11:11:50
Time Complexity : O(1)
Space Complexity : O(1)

Note: We are not considering the case for negative numbers here, the pure focus is building logic and problem solving ability, we are not working on production grade projects, so don't need to focus much on those aspects as of now.
*/

#include <iostream>
using namespace std;

// printEvenOdd checks if a number is even or odd and print it's status
void printEvenOdd(int val)
{
  string output;
  output = ((val & 1) == 0) ? "Even" : "Odd";
  cout << "Input Number \"" << val << "\" is : " << output << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  printEvenOdd(inputNumber);
  return 0;
}
