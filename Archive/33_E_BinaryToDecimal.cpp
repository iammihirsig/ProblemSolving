/*
Author : Mihir Raj Singh
Title : Convert binary to decimal
Date & Time : 2025-05-27 07:54:31
Time Complexity : O(l)  Where l is the length of string
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// print_binary_to_decimal converts binary to decimal and print iot
void print_binary_to_decimal(string &binaryNumber)
{
  int decimal = 0;
  for (char bit : binaryNumber)
  {
    decimal = decimal * 2 + (bit - '0');
    // bit have some ascii value for 1 or 0 when subtracted with '0' leaves 0 and 1 as per calculations
  }
  cout << "Manual Conversion Decimal: " << decimal << endl;
}

int main()
{
  string binaryNumber;
  cout << "Enter binary number: ";
  cin >> binaryNumber;

  // built in method to convert binary to decimal
  cout << "Built-In Conversion Decimal: " << stoi(binaryNumber, 0, 2) << endl;

  // manual function to convert binary to decimal
  print_binary_to_decimal(binaryNumber);

  return 0;
}
