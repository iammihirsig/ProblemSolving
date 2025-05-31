/*
Author: Mihir Raj Singh
Title: Check whether two numbers form a friendly pair
Date & Time: 2025-05-25 14:10:00
Time Complexity: O(√N + √M)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Function to calculate sum of divisors (including the number itself)
int sum_of_divisors(int num)
{
  int sum = 1 + num; // 1 and the number itself

  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
      if (i != num / i)
        sum += num / i;
    }
  }

  return sum;
}

// Function to check for friendly pair
void check_friendly_pair(int a, int b)
{
  int sumA = sum_of_divisors(a);
  int sumB = sum_of_divisors(b);

  // Check if abundancy indexes are equal
  if ((sumA * 1LL * b) == (sumB * 1LL * a))
    cout << "Friendly Pair" << endl;
  else
    cout << "Not a Friendly Pair" << endl;
}

int main()
{
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  check_friendly_pair(num1, num2);

  return 0;
}
