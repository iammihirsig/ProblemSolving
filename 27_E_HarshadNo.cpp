/*
Goal: To check whether the input number is a Harshad (Niven) Number
NOTE: A number is a Harshad Number if it is divisible by the sum of its digits.
Example:
  18 → (1 + 8) = 9 → 18 is divisible by (9 Harshad Number)
  21 → (2 + 1) = 3 → 21 is divisible by (3 Harshad Number)
  19 → (1 + 9) = 10 → 19 is not divisible by 10 (Not a Harshad Number)

TC: O(log n)  // since digit sum calculation takes log n steps
SC: O(1)
*/

#include <iostream>
using namespace std;

// Function to calculate the sum of digits
int sumOfDigits(int num)
{
  int sum = 0;
  while (num > 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

// Function to check if a number is a Harshad Number
bool isHarshad(int num)
{
  int sum = sumOfDigits(num);
  return (num % sum == 0);
}

// Main function
int main()
{
  int num;
  cin >> num;

  if (isHarshad(num))
  {
    cout << "Harshad Number" << endl;
  }
  else
  {
    cout << "Not a Harshad Number" << endl;
  }

  return 0;
}
