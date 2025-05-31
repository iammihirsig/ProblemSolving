/*
Author : Mihir Raj Singh
Title : Find armstrong numbers in a user given range
Date & Time : 2025-05-23 17:57:51
Time Complexity : O(r * logn * log log n) // where "r" is (val2-val1)+1
Space Complexity : O(1)
*/

#include <iostream>
#include <math.h> // for pow function
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

// is_armstrong return true or false based on number is armstrong or not
bool is_armstrong(int val)
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
  return (newNumber == saveVal) ? true : false;
}

// print_range_armstrong finds and print armstrong number in the user given range
void print_range_armstrong(int val1, int val2)
{
  for (int i = val1; i <= val2; i++)
  {
    if (is_armstrong(i))
    {
      cout << i << " ";
    }
  }
}

int main()
{
  int firstNumber, lastNumber;
  cout << "Enter first and last number: ";
  cin >> firstNumber >> lastNumber;
  print_range_armstrong(firstNumber, lastNumber);
  return 0;
}
