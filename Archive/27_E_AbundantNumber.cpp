/*
Author: Mihir Raj Singh
Title: Print whether the user given number is an Abundant number or not
Date & Time: 2025-05-25 14:05:00
Time Complexity: O(√N)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// print_is_abundant_number checks and prints if a number is an abundant number
void print_is_abundant_number(int val)
{
  if (val < 1)
  {
    cout << "Not an Abundant Number" << endl;
    return;
  }

  int sum = 1; // 1 is always a proper divisor

  for (int i = 2; i * i <= val; i++)
  {
    if (val % i == 0)
    {
      sum += i;
      if (i != val / i && val / i != val)
        sum += val / i;
    }
  }

  if (sum > val)
    cout << "Abundant Number" << endl;
  else
    cout << "Not an Abundant Number" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_abundant_number(inputNumber);
  return 0;
}
