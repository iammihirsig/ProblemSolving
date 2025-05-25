/*
Author: Mihir Raj Singh
Title : Print whether the user given number is a perfect number or not
Date & Time: 2025-05-25 13:45:00
Time Complexity: O(√N)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// print_is_perfect_number evaluates and prints whether the input number is a perfect number or not
void print_is_perfect_number(int val)
{
  if (val <= 1)
  {
    cout << "Not a Perfect Number" << endl;
    return;
  }

  int sum = 1; // 1 is always a divisor (excluding the number itself)

  // Loop from 2 to sqrt(val)
  for (int i = 2; i * i <= val; i++)
  {
    if (val % i == 0)
    {
      sum += i;
      if (i != val / i)
        sum += val / i;
    }
  }

  (sum == val) ? cout << "Perfect Number" << endl : cout << "Not a Perfect Number" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_perfect_number(inputNumber);
  return 0;
}
