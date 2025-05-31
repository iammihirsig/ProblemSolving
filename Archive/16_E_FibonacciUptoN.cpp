/*
Author : Mihir Raj Singh
Title : Print first n fibonacci series
Date & Time : 2025-05-24 13:28:16
Time Complexity : O(n)
Space Complexity : o(1)
*/

#include <iostream>
using namespace std;

// print_fibonacci_till_n finds and print first n fibonacci numbers
void print_fibonacci_till_n(int val)
{
  int firstNumber = 0, secondNumber = 1, newNumber;
  for (int i = 0; i < val; i++)
  {
    cout << firstNumber << " ";
    newNumber = firstNumber + secondNumber;
    firstNumber = secondNumber;
    secondNumber = newNumber;
  }
  cout << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_fibonacci_till_n(inputNumber);
  return 0;
}
