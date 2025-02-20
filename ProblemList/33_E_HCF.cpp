/*
Goal: To find the HCF of 2 numbers
NOTE: HCF is also known as gcd (greatest common divisor)

TC: O(log(min(a, b)))
SC: O(1)
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
  int num1, num2;
  cin >> num1 >> num2;

  cout << "HCF is: " << gcd(num1, num2) << endl;

  return 0;
}
