/*
Goal: To check whether the input number is a perfect square
NOTE: A perfect square is a number that is the square of an integer (e.g., 4, 9, 16, 25, ...).

TC: O(1)  // Using sqrt() function
SC: O(1)
*/

#include <iostream>
#include <cmath> // Required for sqrt() function
using namespace std;

bool isPerfectSquare(int num)
{
  if (num < 0)
    return false; // Negative numbers cannot be perfect squares

  int sqrtVal = sqrt(num);
  return (sqrtVal * sqrtVal == num);
}

int main()
{
  int num;
  cin >> num;

  if (isPerfectSquare(num))
  {
    cout << "Perfect Square" << endl;
  }
  else
  {
    cout << "Not a Perfect Square" << endl;
  }

  return 0;
}
