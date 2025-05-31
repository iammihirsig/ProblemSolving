/*
Author: Mihir Raj Singh
Title: Print whether the user given number is a Harshad number or not
Date & Time: 2025-05-25 14:00:00
Time Complexity: O(d), where d = number of digits
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// print_is_harshad_number checks and prints if a number is a Harshad number
void print_is_harshad_number(int val)
{
  if (val == 0)
  {
    cout << "0 is not a Harshad Number" << endl;
    return;
  }

  int temp = val;
  int digitSum = 0;

  while (temp > 0)
  {
    digitSum += temp % 10;
    temp /= 10;
  }

  if (val % digitSum == 0)
    cout << "Harshad Number" << endl;
  else
    cout << "Not a Harshad Number" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_harshad_number(inputNumber);
  return 0;
}
