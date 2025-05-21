/*
Author : Mihir Raj Singh
Title : Print all prime numbers in range
Date & Time : 2025-05-21 13:02:05
Time Complexity : O((val2 - val1 + 1) × √val2)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printIsPrime prints the status whether a number is prime or not
bool isPrime(int val)
{
  // if val is one and less than one it is not prime
  if (val <= 1)
  {
    return false;
  }
  // if val is 2 it is prime hence, do nothing coz default status true
  // if val is a multiple of 2 then it is not prime, coz 2 is the only even prime
  if (val % 2 == 0 && val != 2)
  {
    return false;
  }
  // now, let's check odds
  for (int i = 3; i * i <= val; i += 2)
  {
    if (val % i == 0)
    {
      return false;
    }
  }
  return true;
}

// printRangePrime prints all ther prime numbers within the user given range
void printRangePrime(int val1, int val2)
{
  for (int i = val1; i <= val2; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
  cout << endl;
}

int main()
{
  int firstNumber, lastNumber;
  cout << "Enter first and last numbers: ";
  cin >> firstNumber >> lastNumber;
  printRangePrime(firstNumber, lastNumber);
  return 0;
}
