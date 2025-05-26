/*
Author : Mihir Raj Singh
Title : Find the lcm of two user input numbers
Date & Time : 2025-05-26 19:25:22
Time Complexity : O(log (min(val1, val2)))
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// find_hcf finds and return the hcf of two input values
int find_hcf(int val1, int val2)
{
  int temp;
  while (val2 != 0)
  {
    temp = val2;
    val2 = val1 % val2;
    val1 = temp;
  }
  return val1;
}

// print_lcm finds and print lcm of two input values
void print_lcm(int val1, int val2)
{
  // we will use the logic: (lcm * hcf) = (a * b)

  // let's find hcf of val1 & val2
  int hcf = find_hcf(val1, val2);

  // calculate lcm & print
  int lcm = (val1 * (val2 / hcf));
  cout << "LCM: " << lcm << endl;
}

int main()
{
  int firstNumber, secondNumber;
  cout << "Enter first and second number: ";
  cin >> firstNumber >> secondNumber;
  print_lcm(firstNumber, secondNumber);
  return 0;
}
