/*
Author : Mihir Raj Singh
Title : Check if a year is a leap year or not
Date & Time : 2025-05-21 12:24:29
Time Complexity : O(1)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printIsLeapYear checks and prints if the inputYear is a leap year or not
void printIsLeapYear(int val)
{
  string status;
  status = (val % 400 == 0) ? "Leap Year" : ((val % 4 == 0 && val % 100 != 0) ? "Leap Year" : "Not A Leap Year");
  cout << "The Year \"" << val << "\" is: " << status << endl;
}

int main()
{
  int inputYear;
  cout << "Enter a year: ";
  cin >> inputYear;
  printIsLeapYear(inputYear);
  return 0;
}
