/*
Goal: To check whether the input number is an Automorphic Number
NOTE: A number is Automorphic if its square ends with the number itself.
Example:
  5 → 5² = 25 (ends in 5) Automorphic
  6 → 6² = 36 (ends in 6) Automorphic
  76 → 76² = 5776 (ends in 76) Automorphic

TC: O(d)  // where d is the number of digits in num (log n)
SC: O(1)
*/

#include <iostream>
using namespace std;

bool isAutomorphic(int num)
{
  int square = num * num;

  // Check if last digits of square match the original number
  while (num > 0)
  {
    if (num % 10 != square % 10)
      return false;

    num /= 10;
    square /= 10;
  }

  return true;
}

int main()
{
  int num;
  cin >> num;

  if (isAutomorphic(num))
  {
    cout << "Automorphic Number" << endl;
  }
  else
  {
    cout << "Not an Automorphic Number" << endl;
  }

  return 0;
}
