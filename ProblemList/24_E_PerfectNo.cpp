/*
Goal: To find whether the input no is a perfect number
NOTE: (For Example: 28) Divisors : 1 + 2 + 4 + 7 + 14 = 28

TC: O(√n)
SC: O(1)
*/

#include <iostream>
using namespace std;

// Function to compute the sum of proper divisors
int factorSum(int num)
{
  if (num == 1)
    return 0; // Edge case: 1 is not a perfect number

  int ans = 1;                       // 1 is always a divisor (excluding `num` itself)
  for (int i = 2; i * i <= num; i++) // Start from 2
  {
    if (num % i == 0)
    {
      ans += i;
      if (num / i != i) // Avoid adding the same divisor twice for perfect squares
      {
        ans += num / i;
      }
    }
  }
  return ans;
}

bool isPerfectNo(int num)
{
  return num == factorSum(num);
}

// Main function
int main()
{
  int num;
  cin >> num;

  if (isPerfectNo(num))
  {
    cout << num << " is a Perfect Number." << endl;
  }
  else
  {
    cout << num << " is NOT a Perfect Number." << endl;
  }

  return 0;
}
