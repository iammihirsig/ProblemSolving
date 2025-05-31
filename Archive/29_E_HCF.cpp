/*
Author : Mihir Raj Singh
Title : Find hcf of 2 user given number using euclidean approach
Date & Time : 2025-05-26 19:17:45
Time Complexity : O(log (min(val1,val2)))
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// print_hcf finds and prints the HCF of two input values using the Euclidean algorithm
void print_hcf(int val1, int val2)
{
  int temp;
  while (val2 != 0)
  {
    temp = val2;
    val2 = val1 % val2;
    val1 = temp;
  }
  cout << "HCF: " << val1 << endl;
}

int main()
{
  int firstNumber, lastNumber;
  cout << "Enter first and last number: ";
  cin >> firstNumber >> lastNumber;
  print_hcf(firstNumber, lastNumber);
  return 0;
}
