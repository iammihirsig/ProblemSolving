/*
Goal: To find the greatest no among two.
NOTE: Don't forgot to check for the edge case of equality.

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
int greatestOf2(int num1, int num2)
{
  if (num1 == num2)
  {
    return num1;
  }
  return (num1 > num2) ? num1 : num2;
}

int main()
{
  // take inputs: num1, num2
  int num1, num2;
  cin >> num1 >> num2;

  // call greatestOf2()
  int ans = greatestOf2(num1, num2);
  cout << "Greatest no is: " << ans << endl;

  return 0;
}
