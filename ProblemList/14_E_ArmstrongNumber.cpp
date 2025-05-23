/*
Author : Mihir Raj Singh
Title : Output if a user input number is an armstrong number or not
Date & Time : 2025-05-23 16:08:03
Time Complexity : O(logn⋅loglogn)
Space Complexity : O(1)
*/

#include <iostream>
#include <math.h> // important to use pow function
using namespace std;

// find_order find the order of the value input (basically the no of digits)
int find_order(int val)
{
  int order = 0;
  while (val > 0)
  {
    order++;
    val /= 10;
  }
  return order;
}

// print_is_armstrong evaluate and tells whether the input val is an armstrong number or not
void print_is_armstrong(int val)
{
  // find order
  int order = find_order(val);
  // calculate new sum value using armstrong principle
  int newNumber = 0, saveVal = val;
  while (val > 0)
  {
    newNumber += pow((val % 10), order);
    val /= 10;
  }
  // compare new value with the user input number
  (newNumber == saveVal) ? cout << "Armstrong Number" << endl : cout << "Not an Armstrong Number" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_armstrong(inputNumber);
  return 0;
}
