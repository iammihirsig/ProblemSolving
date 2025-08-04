// Reverse a number

#include <iostream>
using namespace std;

// ==================== METHOD 1 ====================
void reverseDigits(int inputNumber)
{
  // Time Complexity: O(log₁₀ N) — where N is the input number
  // Space Complexity: O(1)

  int reverse = 0, lastDigit = 0;

  while (inputNumber > 0)
  {
    lastDigit = inputNumber % 10;
    reverse = (reverse * 10) + lastDigit;
    inputNumber /= 10;
  }
  cout << "ANS: " << reverse << endl;
}
// ==================================================

// ==================== MAIN FUNCTION ====================
int main()
{
  int inputNumber;
  cout << "Enter Input: ";
  cin >> inputNumber;
  reverseDigits(inputNumber);

  return 0;
}
