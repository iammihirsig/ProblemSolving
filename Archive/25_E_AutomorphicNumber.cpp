/*
Author: Mihir Raj Singh
Title : Print whether the user given number is an automorphic number or not
Date & Time: 2025-05-25 13:55:00
Time Complexity: O(d), where d = number of digits in the input number
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// print_is_automorphic checks and prints if a number is automorphic
void print_is_automorphic(int val)
{
  long long int square = (long long)val * val;
  int temp = val;
  bool isAutomorphic = true;

  while (temp > 0)
  {
    if ((temp % 10) != (square % 10))
    {
      isAutomorphic = false;
      break;
    }
    temp /= 10;
    square /= 10;
  }

  if (isAutomorphic)
    cout << "Automorphic Number" << endl;
  else
    cout << "Not an Automorphic Number" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_automorphic(inputNumber);
  return 0;
}
