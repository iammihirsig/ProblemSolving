/*
Author : Mihir Raj Singh
Title : Output if a number is prime or not
Date & Time : 2025-05-21 12:39:02
Time Complexity : O(√N)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// printIsPrime prints the status whether a number is prime or not
void printIsPrime(int val)
{
  bool status = true;

  // if val is one and less than one it is not prime
  if (val <= 1)
  {
    status = false;
  }
  // if val is 2 it is prime hence, do nothing coz default status true
  // if val is a multiple of 2 then it is not prime, coz 2 is the only even prime
  if (val % 2 == 0 && val != 2)
  {
    status = false;
  }
  // now, let's check odds
  for (int i = 3; i * i <= val; i += 2)
  {
    if (val % i == 0)
    {
      status = false;
      break;
    }
  }
  // after loop execute, simply print and return
  if (status == true)
  {
    cout << val << " is a Prime Number" << endl;
  }
  else
  {
    cout << val << " is not a Prime Number" << endl;
  }
  return;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  printIsPrime(inputNumber);
  return 0;
}
