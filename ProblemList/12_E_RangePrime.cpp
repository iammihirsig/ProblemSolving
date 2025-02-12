/*
Goal: To find all prime number in a given range using optimized approach called "Segmented Sieve Of Eratosthenes"
NOTE: This is must to know algo for interview

TC: O(sqrt(end) * log log sqrt(end) + (end - start) * log log end)
SC: O(sqrt(end))
*/

#include <iostream>
#include <vector>
#include <math.h> // for sqrt
using namespace std;

// Basic sieve to find primes up to sqrt(end)
vector<int> simpleSieve(int limit)
{
  vector<bool> isPrime(limit + 1, true);
  vector<int> primes;

  for (int i = 2; i * i <= limit; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= limit; j += i)
        isPrime[j] = false;
    }
  }

  for (int i = 2; i <= limit; i++)
  {
    if (isPrime[i])
      primes.push_back(i);
  }
  return primes;
}

// Segmented Sieve to find primes in range [start, end]
vector<int> segmentedSieve(int start, int end)
{
  int limit = sqrt(end);
  vector<int> primes = simpleSieve(limit);

  vector<bool> isPrime(end - start + 1, true);

  // Mark multiples of small primes
  for (int prime : primes)
  {
    int firstMultiple = max(prime * prime, (start + prime - 1) / prime * prime);

    for (int j = firstMultiple; j <= end; j += prime)
    {
      isPrime[j - start] = false;
    }
  }

  vector<int> result;
  for (int i = 0; i < isPrime.size(); i++)
  {
    if (isPrime[i] && (start + i) >= 2)
      result.push_back(start + i);
  }
  return result;
}

int main()
{
  int start, end;
  cin >> start >> end;

  vector<int> primes = segmentedSieve(start, end);

  for (int prime : primes)
  {
    cout << prime << " ";
  }
  cout << endl;

  return 0;
}
