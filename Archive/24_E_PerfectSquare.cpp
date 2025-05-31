/*
Author: Mihir Raj Singh
Title : Print whether the user given number is a perfect square or not
Date & Time: 2025-05-25 13:50:00
Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

// print_is_perfect_square evaluates and prints whether the input number is a perfect square or not
void print_is_perfect_square(int val)
{
  if (val < 0)
  {
    cout << "Not a Perfect Square" << endl;
    return;
  }

  int root = sqrt(val);
  if (root * root == val)
    cout << "Perfect Square" << endl;
  else
    cout << "Not a Perfect Square" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_perfect_square(inputNumber);
  return 0;
}
