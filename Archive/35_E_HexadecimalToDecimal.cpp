/*
Author : Mihir Raj Singh
Title : Convert hexadecimal to decimal
Date & Time : 2025-05-27 09:15:25
Time Complexity : O(l)  Where l is the length of the string
Space Complexity : O(1)
*/

#include <iostream>
#include <cctype> // for toupper
using namespace std;

// Function to manually convert hexadecimal string to decimal
void print_hexadecimal_to_decimal(string &hexNumber)
{
  int decimal = 0;
  for (char digit : hexNumber)
  {
    digit = toupper(digit); // convert to uppercase for uniformity (a -> A)
    int value;

    if (isdigit(digit))
      value = digit - '0';
    else
      value = digit - 'A' + 10; // A=10, B=11, ..., F=15

    decimal = decimal * 16 + value;
  }
  cout << "Manual Conversion Decimal: " << decimal << endl;
}

int main()
{
  string hexNumber;
  cout << "Enter hexadecimal number (0-9, A-F): ";
  cin >> hexNumber;

  // Built-in method using base 16
  cout << "Built-In Conversion Decimal: " << stoi(hexNumber, 0, 16) << endl;

  // Manual method
  print_hexadecimal_to_decimal(hexNumber);

  return 0;
}
