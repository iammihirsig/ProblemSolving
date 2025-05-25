/*
Author : Mihir Raj Singh
Title : Print whether the user given number is a strong number or not
Date & Time : 2025-05-25 13:23:24
Time Complexity : O(d * D), where d = number of digits, D = max digit (<= 9)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// factorial finds and return the factorial value of input value
long long int factorial(int val)
{
  long long int fact = 1;
  for (int i = 1; i <= val; i++)
  {
    fact *= i;
  }
  return fact;
}

// print_is_strongnumber evaluate and prints whether the input number is a strong number or not
void print_is_strongnumber(int val)
{
  int storeVal = val;
  long long int newNumber = 0;
  int lastdigit;
  while (val > 0)
  {
    lastdigit = val % 10;
    newNumber += factorial(lastdigit);
    val /= 10;
  }
  (storeVal == newNumber) ? cout << "Strong Number" << endl : cout << "Not a Strong Number" << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_strongnumber(inputNumber);
  return 0;
}
