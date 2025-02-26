/*
Goal: Convert all 0s to 1s in an input number
NOTE:

TC: O(log n)
SC: O(1)
*/

#include <iostream>
using namespace std;

// convert0To1 converts all 0s in an input number to 1s and return new number
int convert0To1(int n)
{
  // edge case for n == 0
  if (n == 0)
  {
    return 1;
  }

  string s = "";
  int lastDigit;
  while (n > 0)
  {
    lastDigit = n % 10;
    if (lastDigit == 0)
    {
      lastDigit = 1;
    }
    s = to_string(lastDigit) + s;
    n /= 10;
  }
  return stoi(s);
}

int main()
{
  // take input num
  int num;
  cin >> num;

  // call convert0To1()
  int ans = convert0To1(num);

  // output answer
  cout << "Ans: " << ans << endl;
}
