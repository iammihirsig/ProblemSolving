/*
Goal: To calculate the power of a number
NOTE:

TC: O(log n)
SC: O(1)

*/
#include <iostream>
using namespace std;

long long power(int num, int value)
{
  long long ans = 1;
  while (value > 0)
  {
    // If value is odd, multiply num with ans
    if (value % 2 == 1)
    {
      ans *= num;
    }
    num *= num; // Square the base
    value /= 2; // Reduce exponent by half
  }
  return ans;
}

int main()
{
  int num, value;
  cin >> num >> value;

  long long ans = power(num, value);
  cout << "Power Is: " << ans << endl;

  return 0;
}
