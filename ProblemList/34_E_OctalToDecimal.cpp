/*
Author : Mihir Raj Singh
Title : Convert octal to decimal
Date & Time : 2025-05-27 08:11:39
Time Complexity : O(l)  Where l is the length of string
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// print_octal_to_decimal converts binary to decimal and print iot
void print_octal_to_decimal(string &octalNumber)
{
  int decimal = 0;
  for (char bit : octalNumber)
  {
    decimal = decimal * 8 + (bit - '0');
    // bit have some ascii value for 1 or 0 when subtracted with '0' leaves 0 and 1 as per calculations
  }
  cout << "Manual Conversion Decimal: " << decimal << endl;
}

int main()
{
  string octalNumber;
  cout << "Enter octal number: ";
  cin >> octalNumber;

  // built in method to convert octal to decimal
  cout << "Built-In Conversion Decimal: " << stoi(octalNumber, 0, 8) << endl;

  // manual function to convert octal to decimal
  print_octal_to_decimal(octalNumber);

  return 0;
}
