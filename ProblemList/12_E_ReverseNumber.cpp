/*
Author : Mihir Raj Singh
Title : Reverse a user given number
Date & Time : 2025-05-22 21:44:15
Time Complexity :
Space Complexity :
*/

#include <iostream>
using namespace std;

// print_reverse_number reverse the input number and prints it
void print_reverse_number(int val)
{
  int lastdigit, rev = 0;
  while (val > 0)
  {
    lastdigit = val % 10;
    rev = (rev * 10) + lastdigit;
    val /= 10;
  }
  cout << "Reverse Number Is: " << rev << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_reverse_number(inputNumber);
  return 0;
}
