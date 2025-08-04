// Count number of digits in input

#include <iostream>
#include <bits/stdc++.h> // for METHOD 2
using namespace std;

// ==================== METHOD 1 ====================
void countDigits_Method1(int inputNumber)
{
  // Time Complexity: O(log₁₀ N) — where N is the input number
  // Space Complexity: O(1)

  int count = 0;

  while (inputNumber > 0)
  {
    count++;
    inputNumber /= 10;
  }
  cout << "ANS: " << count << endl;
}
// ==================================================

// ==================== METHOD 2 ====================
void countDigits_Method2(int inputNumber)
{
  // Time Complexity: O(1) — log10 is computed in constant time
  // Space Complexity: O(1)

  int ans = (int)log10(inputNumber) + 1;
  cout << "ANS: " << ans << endl;
}
// ==================================================

// ==================== MAIN FUNCTION ====================
int main()
{
  int inputNumber;
  cout << "Enter Input: ";
  cin >> inputNumber;
  countDigits_Method1(inputNumber);
  countDigits_Method2(inputNumber);

  return 0;
}
