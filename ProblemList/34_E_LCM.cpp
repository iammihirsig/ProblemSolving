/*
Goal: To find the LCM of 2 numbers
NOTE:

TC: O(log(min(a, b)))
SC: O(1)
*/

#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean Algorithm (Optimized)
int gcd(int a, int b)
{
  return (b == 0) ? a : gcd(b, a % b);
}

// Function to compute LCM using the formula
int lcm(int a, int b)
{
  return (a / gcd(a, b)) * b; // Avoids overflow by dividing first
}

int main()
{
  int num1 = 36, num2 = 60;

  cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2);

  return 0;
}
