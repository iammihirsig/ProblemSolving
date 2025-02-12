/*
Goal: To find the unique prime factors of a number
NOTE:

TC: O(√n)
SC: O(1)
*/

#include <iostream>
using namespace std;

void uniquePrimeFactors(int num)
{
  // Check for divisibility by 2
  if (num % 2 == 0)
  {
    cout << 2 << " ";
    while (num % 2 == 0)
    {
      num /= 2;
    }
  }

  // Check for odd prime factors
  for (int i = 3; i * i <= num; i += 2)
  {
    if (num % i == 0)
    {
      cout << i << " ";
      while (num % i == 0)
      {
        num /= i;
      }
    }
  }

  // If num is still a prime number > 2
  if (num > 2)
  {
    cout << num;
  }
}

int main()
{
  int num;
  cin >> num;

  uniquePrimeFactors(num);

  return 0;
}
