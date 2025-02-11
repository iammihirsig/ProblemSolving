/*
Goal: To find whether the input no is armstrong.
NOTE:


TC: O(log n)
SC: O(1)
*/
#include <iostream>
#include <math.h>
using namespace std;

// function declaration
int findOrder(int num)
{
  int count = 0;
  while (num > 0)
  {
    count++;
    num /= 10;
  }
  return count;
}

bool isArmstrong(int num)
{
  int order = findOrder(num);
  int lastDigit = 0, sum = 0, temp = num;
  while (temp > 0)
  {
    lastDigit = temp % 10;
    sum += pow(lastDigit, order);
    temp /= 10;
  }
  return (sum == num);
}

// main code
int main()
{
  int num;
  cin >> num;

  if (isArmstrong(num))
  {
    cout << "Armstrong." << endl;
  }
  else
  {
    cout << "Not Armstrong." << endl;
  }

  return 0;
}
