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

  int ans = 1; // 1 is always a divisor (excluding `num` itself)
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      ans += i;
      if (num / i != i) // Avoid adding the same divisor twice
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
    cout << "Perfect No." << endl;
  }
  else
  {
    cout << "Not a Perfect No." << endl;
  }

  return 0;
}
