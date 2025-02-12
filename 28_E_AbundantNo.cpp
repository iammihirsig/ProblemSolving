/*
Goal: To check whether the input number is an Abundant Number.
NOTE: A number is an Abundant Number if the sum of its proper divisors is greater than the number itself.
Example:
  12 → Divisors: 1, 2, 3, 4, 6 → Sum = 16 (greater than 12) (Abundant Number)
  15 → Divisors: 1, 3, 5 → Sum = 9 (less than 15) (Not an Abundant Number)

TC: O(√n) // Efficiently finds divisors up to √n
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

// Function to check if a number is an Abundant Number
bool isAbundant(int num)
{
  return sumOfDivisors(num) > num;
}

// Main function
int main()
{
  int num;
  cin >> num;

  if (isAbundant(num))
  {
    cout << "Abundant Number" << endl;
  }
  else
  {
    cout << "Not an Abundant Number" << endl;
  }

  return 0;
}
