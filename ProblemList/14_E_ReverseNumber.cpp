/*
Goal: To find the reverse of an input number
NOTE: Implementation of formula: ((rev * 10) + lastDigit)


TC: O(log n)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
int reverseNum(int num)
{
  int lastDigit = 0, reverse = 0;
  while (num > 0)
  {
    lastDigit = num % 10;
    reverse = (reverse * 10) + lastDigit;
    num /= 10;
  }
  return reverse;
}

int main()
{
  // take input: num
  int num;
  cin >> num;

  // call reverseNum()
  int ans = reverseNum(num);

  // print ans
  cout << "Reverse Is: " << ans << endl;

  return 0;
}
