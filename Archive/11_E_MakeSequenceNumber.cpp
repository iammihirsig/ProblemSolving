/*
Author : Mihir Raj Singh
Title : You are given a user input number you have to recreate and print that number using some operations, so that you get to know that how a number is printed as it is if we need ever to calculate
Date & Time : 2025-05-22 21:31:18
Time Complexity : O((logn)2) in the worst case But can be considered 𝑂(log 𝑛) if pow(10, i) is constant-time (as with integer exponents in some compilers)
Space Complexity : O(1)
*/

#include <iostream>
#include <math.h> // for pow function
using namespace std;

// print_as_it_is function perform some operation to generate same number from the number itself in sequence
void print_as_it_is(int val)
{
  int lastdigit, sequence = 0, i = 0; // i is iteration
  while (val > 0)
  {
    lastdigit = val % 10;
    sequence = (lastdigit * pow(10, i)) + sequence;
    i++;
    val /= 10;
  }
  cout << "The Number Obtained is: " << sequence << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_as_it_is(inputNumber);
  return 0;
}
