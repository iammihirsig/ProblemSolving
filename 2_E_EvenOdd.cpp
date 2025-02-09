/*
Goal: To check whether the input no is even or odd.
NOTE: Not operator is used to flip the bool value, so that it can be used as per the logic of if else statement

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
bool isEven(int num)
{
  return !(num & 1);
}

int main()
{
  // take input num
  int num;
  cin >> num;

  // call isEven()
  if (isEven(num))
  {
    cout << "Even." << endl;
  }
  else
  {
    cout << "Odd." << endl;
  }

  return 0;
}
