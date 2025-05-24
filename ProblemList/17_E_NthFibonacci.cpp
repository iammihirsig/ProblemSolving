/*
Author : Mihir Raj Singh
Title : Find the nth fibonacci number
Date & Time : 2025-05-24 14:19:14
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// print_nth_fibonacci finds and prints the nth Fibonacci number
void print_nth_fibonacci(int val)
{
  // handle case for val = 1,2
  if (val == 1 || val == 2)
  {
    cout << val - 1 << endl;
    return;
  }

  int firstNumber = 0, secondNumber = 1, newNumber = 0;

  // for rest of the positive cases
  for (int i = 2; i <= val; i++)
  {
    newNumber = firstNumber + secondNumber;
    firstNumber = secondNumber;
    secondNumber = newNumber;
  }
  cout << firstNumber << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_nth_fibonacci(inputNumber);
  return 0;
}
