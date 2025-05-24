/*
Author : Mihir Raj Singh
Title : Find the factorial of a given number
Date & Time : 2025-05-24 14:36:02
Time Complexity : O(n)
Space Complexity : O(1)
Note: The maximum number you can find factorial of using this code is 20, then overflow will occur (overflow of long long)
*/

#include <iostream>
using namespace std;

// print_factorial_of_number find and print the factorial of input val
void print_factorial_of_number(int val)
{
  // check for negative inputs
  if (val < 0)
  {
    cout << "Factorial is not defined for negative numbers." << endl;
    return;
  }

  // we will use long long to prevent factorial overflow
  long long int factorial = 1;
  for (int i = 1; i <= val; i++)
  {
    factorial *= i;
  }
  cout << "Factorial of " << val << " is: " << factorial << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_factorial_of_number(inputNumber);
  return 0;
}
