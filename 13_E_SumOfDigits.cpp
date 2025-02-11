/*
Goal: To find sum of digits of a number
NOTE: Extract digit and add


TC: O(log n)   // The number of digits is log₁₀(n), so we iterate O(log n) times
SC: O(1)       // Only a few variables are used, so constant space is needed

TC Explanation: Explanation:
A number 'n' has 'd' digits if: 10^(d-1) <= n < 10^d

Examples:
  If n = 9, then 1 digit  (since 10^0 = 1 ≤ 9 < 10^1 = 10)
If n = 567, then 3 digits (since 10^2 = 100 ≤ 567 < 10^3 = 1000)
  If n = 12345, then 5 digits (since 10^4 = 10000 ≤ 12345 < 10^5 = 100000)

Formula: d = floor(log10(n)) + 1

Why O(log n) time complexity?
- Each iteration removes one digit (by dividing by 10).
- The number of iterations equals the number of digits.
- Since the number of digits is O(log n), the overall complexity is O(log n).

Additional Insight:
- Since we divide by 10 in each step, the number of steps is **equal to the number of digits**.
- This gives us O(log_10 n), which is written as O(log n) because logarithms in different bases differ only by a constant factor..
*/

#include <iostream>
using namespace std;

// function declaration
int digitSum(int num)
{
  int sum = 0, lastDigit = 0;
  while (num > 0)
  {
    lastDigit = num % 10;
    sum += lastDigit;
    num /= 10;
  }
  return sum;
}

int main()
{
  // take input: num
  int num;
  cin >> num;

  // call digitSum()
  int ans = digitSum(num);

  // print ans
  cout << "Digit Sum: " << ans << endl;

  return 0;
}
