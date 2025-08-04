// Check if a number is armstrong

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ==================== METHOD 1 ====================
void checkArmstrong(int inputNumber)
{
  // Time Complexity: O(log₁₀ N)
  // Space Complexity: O(1)

  if (inputNumber == 0)
  {
    cout << "Armstrong Number." << endl;
    return;
  }

  int original = inputNumber;
  int sum = 0;

  // Count digits
  int count = (int)log10(inputNumber) + 1;

  // Compute Armstrong sum
  while (inputNumber > 0)
  {
    int lastDigit = inputNumber % 10;
    sum += pow(lastDigit, count);
    inputNumber /= 10;
  }

  if (sum == original)
  {
    cout << "Armstrong Number." << endl;
  }
  else
  {
    cout << "Not an Armstrong Number." << endl;
  }
}
// ==================================================

// ==================== MAIN FUNCTION ====================
int main()
{
  int inputNumber;
  cout << "Enter Input: ";
  cin >> inputNumber;
  checkArmstrong(inputNumber);

  return 0;
}
