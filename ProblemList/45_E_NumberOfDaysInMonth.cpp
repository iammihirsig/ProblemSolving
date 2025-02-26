/*
Goal: Find the number of days in a given month
NOTE:

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
  int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int month, year;
  cout << "Enter Month: ";
  cin >> month;
  cout << "Enter Year: ";
  cin >> year;

  // For checking leap year
  if (month == 2 && ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0))))
    cout << "Number of days is " << arr[month - 1] + 1 << endl;

  else
    cout << "Number of days is" << arr[month - 1] << endl;

  return 0;
}
