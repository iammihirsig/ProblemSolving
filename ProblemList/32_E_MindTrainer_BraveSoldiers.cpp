/*
Author : Mihir Raj Singh
Title : Special code for mind training
Date & Time : 2025-05-26 21:15:56
Time Complexity : O(n . √n)
Space Complexity : O(1)

Problem Statement: King Luther has an army with N soldiers, each with an ID between 1 and N. The king wants to know how many soldiers in his army are "brave."
A soldier is considered "brave" if their ID has exactly two factors (or Divisors) and is not a perfect square.
Since King Luther is busy with his duties, he needs your help to count the number of "brave" soldiers in his army.
Your task is to count how many soldiers have "brave" IDs according to the criteria.

Constraints: 1 ≤ N ≤ 10^6

Test Input: 20
Test Output: 8
Explanation: Only 8 numbers from 1 to 20 follow the brave criteria those are : 2, 3, 5, 7, 11, 13, 17, 19.

Breakdown: Basically, you have to count all prime numbers till input number
*/

#include <iostream>
using namespace std;

// is_prime checks whether a input val is prime or not
bool is_prime(int val)
{
  if ((val <= 1) || (val % 2 == 0 && val != 2))
    return false;

  for (int i = 3; i * i <= val; i += 2)
  {
    if (val % i == 0)
      return false;
  }
  return true;
}

// print_brave_soldiers counts all brave soldiers and prints it
void print_brave_soldiers(int inputNumber)
{
  int count = 0; // to keep track of brave soldiers

  for (int i = 2; i <= inputNumber; i++)
  {
    if (is_prime(i))
    {
      count++;
    }
  }
  cout << "No of Brave Soldiers: " << count << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_brave_soldiers(inputNumber);
  return 0;
}
