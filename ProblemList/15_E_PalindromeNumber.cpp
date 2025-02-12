/*
Goal: To find whether the input no is palindrome.
NOTE: Check if the number equal to it's half reverse.


TC: O(log n)
SC: O(1)
*/
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
  // Negative numbers and numbers ending in 0 (except 0 itself) are NOT palindromes
  if (num < 0 || (num % 10 == 0 && num != 0))
  {
    return false;
  }

  int reversedHalf = 0;
  while (num > reversedHalf)
  {
    reversedHalf = (reversedHalf * 10) + (num % 10);
    num /= 10;
  }

  // Compare first half with second half (ignoring middle digit for odd-length numbers)
  return (num == reversedHalf || num == reversedHalf / 10);
}

int main()
{
  int num;
  cin >> num;

  if (isPalindrome(num))
  {
    cout << "Palindrome." << endl;
  }
  else
  {
    cout << "Not Palindrome." << endl;
  }

  return 0;
}
