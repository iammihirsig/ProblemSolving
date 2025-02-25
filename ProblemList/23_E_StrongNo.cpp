/*
Goal: To find whether the input no is a strong number
NOTE: For Example: 145 = 1! + 4! + 5! =  145

TC: O(log n)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
int findFactorial(int value)
{
  int ans = 1;
  for (int i = 1; i <= value; i++)
  {
    ans *= i;
  }
  return ans;
}

bool isStrongNo(int num)
{
  int lastDigit = 0, temp = num, newNumber = 0;
  while (temp > 0)
  {
    lastDigit = temp % 10;
    newNumber += findFactorial(lastDigit);
    temp /= 10;
  }
  return (newNumber == num);
}

// main code
int main()
{
  // take input
  int num;
  cin >> num;

  // call isStrongNo()
  if (isStrongNo(num))
  {
    cout << "Strong No." << endl;
  }
  else
  {
    cout << "Not a Strong No." << endl;
  }

  return 0;
}
