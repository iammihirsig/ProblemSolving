/*
Goal: To check whether the input no is +ve or -ve.
NOTE: Not considering the 0 case.

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
bool isPositive(int num)
{
  return (num > 0); // 0 is neither positive nor negative
}

int main()
{
  // take input num
  int num;
  cin >> num;

  // call isPositive()
  if (isPositive(num))
  {
    cout << "Positive." << endl;
  }
  else
  {
    cout << "Negative." << endl;
  }

  return 0;
}
