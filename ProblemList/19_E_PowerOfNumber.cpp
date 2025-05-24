/*
Author : Mihir Raj Singh
Title : Find the power of a given number (Power also given)
Date & Time : 2025-05-24 14:52:10
Time Complexity : O(log n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// print_power_of_number find and print the power of number using exponentiation by squaring
void print_power_of_number(int base, int exponent)
{
  // handle negative powers
  if (exponent < 0)
  {
    cout << "Negative powers are not supported in this version." << endl;
    return;
  }

  // handle exponent 0 case
  if (exponent == 0)
  {
    cout << "Number " << base << " raised to power " << exponent << " is: 1" << endl;
    return;
  }

  long long int power = 1;
  int original_base = base;         // store original base for printing
  int original_exponent = exponent; // store original exponent for printing

  while (exponent > 0)
  {
    if (exponent % 2 == 1) // if exponent is odd
    {
      power *= base;
    }
    base *= base;  // square the base
    exponent /= 2; // integer divide exponent by 2
  }

  cout << "Number " << original_base << " raised to power " << original_exponent << " is: " << power << endl;
}

int main()
{
  int inputNumber, inputPower;
  cout << "Enter a number and its power: ";
  cin >> inputNumber >> inputPower;
  print_power_of_number(inputNumber, inputPower);
  return 0;
}
