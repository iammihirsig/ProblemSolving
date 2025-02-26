/*
Goal: Check if an input number can be expressed as sum of 2 prime numbers
NOTE: Every positive number greater than 2 can be expressed as sum of 2 prime numbers and some odd numbers too can be expressed as sum of 2 prime numbers (Ex: 13)

TC: O(n log log n)
SC: O(n)
*/
#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes to precompute prime numbers
vector<bool> sieve(int n)
{
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

  for (int i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= n; j += i)
        isPrime[j] = false;
    }
  }
  return isPrime;
}

// Function to check prime sum representation
void checkPrimeSum(int num)
{
  if (num < 4)
  {
    cout << "The number cannot be expressed as the sum of two prime numbers." << endl;
    return;
  }

  // Get prime numbers up to num
  vector<bool> isPrime = sieve(num);

  // Find pairs of prime numbers that sum up to num
  for (int i = 2; i <= num / 2; i++)
  {
    if (isPrime[i] && isPrime[num - i])
    {
      cout << num << " = " << i << " + " << (num - i) << endl;
    }
  }
}

int main()
{
  int num;
  cin >> num;
  checkPrimeSum(num);
  return 0;
}
