// Check if a number is palindrome

#include <iostream>
using namespace std;

// ==================== METHOD 1 ====================
void checkPalindrome(int inputNumber)
{
  // Time Complexity: O(log₁₀ N) — where N is the input number
  // Space Complexity: O(1)

  // Negative numbers and numbers ending in 0 (but not 0 itself) can't be palindromes
  if (inputNumber < 0 || (inputNumber % 10 == 0 && inputNumber != 0))
  {
    cout << "Not Palindrome." << endl;
    return;
  }

  int reverse = 0, lastDigit = 0;
  while (inputNumber > reverse)
  {
    lastDigit = inputNumber % 10;
    reverse = (reverse * 10) + lastDigit;
    inputNumber /= 10;
  }
  if (reverse == inputNumber || reverse / 10 == inputNumber)
  {
    cout << "Palindrome." << endl;
    return;
  }
  cout << "Not Palindrome." << endl;
  return;
}
// ==================================================

// ==================== MAIN FUNCTION ====================
int main()
{
  int inputNumber;
  cout << "Enter Input: ";
  cin >> inputNumber;
  checkPalindrome(inputNumber);

  return 0;
}
