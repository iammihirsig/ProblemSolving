/*
Goal: To find if the input number is a leap year or not.
NOTE: A leap year is always divisible by (400) and (divisible by 4 but not 100).


TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
bool isLeap(int year)
{
  return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main()
{
  // take input: year;
  int year;
  cin >> year;

  // call isLeap()
  if (isLeap(year))
  {
    cout << "Leap Year." << endl;
  }
  else
  {
    cout << "Not a Leap Year." << endl;
  }

  return 0;
}
