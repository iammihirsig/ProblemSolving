/*
Goal: To check whether two numbers form a Friendly Pair.
NOTE: Two numbers (A, B) are a Friendly Pair if the sum of their proper divisors divided by the number itself is the same for both numbers.
Formula: (Sum of Divisors of A) / A == (Sum of Divisors of B) / B

Example:
  (6, 28) → Sum(6) = 1+2+3=6, Sum(28) = 1+2+4+7+14=28 → 6/6 == 28/28 (Friendly Pair)
  (30, 140) → Sum(30)/30 != Sum(140)/140 (Not a Friendly Pair)

TC: O(√A + √B)
SC: O(1)
*/

#include <iostream>
using namespace std;

// Function to calculate the sum of proper divisors
int sumOfDivisors(int num)
{
  int sum = 1; // 1 is always a divisor
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
      if (i != num / i)
      {
        sum += num / i;
      }
    }
  }
  return sum;
}

// Function to check if two numbers are a Friendly Pair
bool isFriendlyPair(int a, int b)
{
  return (sumOfDivisors(a) * b == sumOfDivisors(b) * a);
}

// Main function
int main()
{
  int a, b;
  cin >> a >> b;

  if (isFriendlyPair(a, b))
  {
    cout << "Friendly Pair" << endl;
  }
  else
  {
    cout << "Not a Friendly Pair" << endl;
  }

  return 0;
}
