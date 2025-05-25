/*
Author: Mihir Raj Singh
Title: Print all prime factors of a user input number
Date & Time: 2025-05-25 13:20:00
Time Complexity: O(√N)
Space Complexity: O(1)  // if we don't store the factors, just print them
*/

#include <iostream>
using namespace std;

// Function to print prime factors
void print_prime_factors(int val)
{
  // Handle 2 separately to allow incrementing i by 2 later (for odd numbers only)
  while (val % 2 == 0)
  {
    cout << 2 << " ";
    val /= 2;
  }

  // Try odd numbers from 3 to √val
  for (int i = 3; i * i <= val; i += 2)
  {
    while (val % i == 0)
    {
      cout << i << " ";
      val /= i;
    }
  }

  // If remaining val is a prime number greater than 2
  if (val > 2)
  {
    cout << val << " ";
  }

  cout << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;

  if (inputNumber <= 1)
  {
    cout << "No prime factors." << endl;
  }
  else
  {
    print_prime_factors(inputNumber);
  }

  return 0;
}
