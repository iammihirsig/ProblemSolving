/*
Goal: To find possible sitting arrangement using permutation
NOTE:

TC: O(log(min(numerator, denominator)))
SC: O(1)
*/

#include <iostream>
#include <cstdlib> // For abs()
using namespace std;

// Function to compute the greatest common divisor using Euclid's algorithm
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int num1, den1, num2, den2;

  // Input first fraction
  cout << "Enter numerator and denominator of the first fraction: ";
  cin >> num1 >> den1;

  // Input second fraction
  cout << "Enter numerator and denominator of the second fraction: ";
  cin >> num2 >> den2;

  // Compute the numerator and denominator of the sum
  int numerator = num1 * den2 + num2 * den1;
  int denominator = den1 * den2;

  // Reduce the fraction by dividing numerator and denominator by their GCD
  int divisor = gcd(abs(numerator), abs(denominator));
  numerator /= divisor;
  denominator /= divisor;

  cout << "Sum: " << numerator << "/" << denominator << endl;

  return 0;
}
