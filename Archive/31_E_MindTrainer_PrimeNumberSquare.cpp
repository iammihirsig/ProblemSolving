/*
Author : Mihir Raj Singh
Title : Special code for mind training
Date & Time : 2025-05-26 20:18:15
Time Complexity : O(N · √(N log N))
Space Complexity : O(1)

Problem Statement: Given a number N. Your task is to create a program to calculate the N-th term of the Alice choice.
Alice's sequence consists of the squares of prime numbers: 2^2, 3^2, 5^2, 7^2, 11^2 13^2,17^2,19^2, 23^2, 29^2,…………

Constraints: 1 <= N <= 10^5

Test Input: 10
Test Output: 841

Breakdown: Basically you have to find nth prime number, square it and print it
*/

#include <iostream>
using namespace std;

// is_prime checks whether a number is prime or not
bool is_prime(int val)
{
  // if val is one and less than one it is not prime
  // if val is 2 it is prime hence, do nothing coz default status true
  // if val is a multiple of 2 then it is not prime, coz 2 is the only even prime
  if (val <= 1 || (val % 2 == 0 && val != 2))
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

// print_nth_prime_square find and print nth prime square based on nthIndex input
void print_nth_prime_square(int nthIndex)
{
  int count = 0; // to keep track of count
  int num = 2;   // first prime number to starts with
  while (true)
  {
    if (is_prime(num))
    {
      count++;
      if (count == nthIndex)
      {
        cout << "Nth Prime square is: " << (num * num) << endl;
        break;
      }
    }
    num++;
  }
}

int main()
{
  int nthIndex;
  cout << "Enter the value of n: ";
  cin >> nthIndex;
  print_nth_prime_square(nthIndex);
  return 0;
}
