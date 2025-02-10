/*
Goal: To find all prime number till n using optimized approach called "Sieve Of Eratosthenes"
NOTE: This is must to know algo for interview

TC: O(n log log n) : To understand time complexity, just know that it forms a harmonic series of prime which approximate give this time complexity
SC: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

// function declaration
void sieveOfEratosthenes(int n, vector<int> &primes)
{
  vector<bool> isPrime(n + 1, true);

  // 0 and 1 is not prime
  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      // starting from i*i coz, previous no are already marked by smaller values of i
      for (int j = i * i; j <= n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      primes.push_back(i);
    }
  }
}

int main()
{
  // take input n
  int n;
  cin >> n;

  // create a vector to store all primes
  vector<int> primes;

  // call sieveOfEratosthenes()
  sieveOfEratosthenes(n, primes);

  // print primes
  for (int i : primes)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
