/*
Author : Mihir Raj Singh
Title : Check if the input number is a palindrome or not
Date & Time : 2025-05-23 13:46:55
Time Complexity : O(log n) // slightly better than log n
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// print_is_palindrome check and prints if the number is palindrome or not
void print_is_palindrome(int val)
{
  int lastdigit, rev = 0;
  while (val > rev)
  {
    lastdigit = val % 10;
    rev = (rev * 10) + lastdigit;
    val /= 10;
  }
  if ((val == rev) || (val == (rev / 10)))
  {
    cout << "Palindrome" << endl;
  }
  else
  {
    cout << "Not Plaindrome." << endl;
  }
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_is_palindrome(inputNumber);
  return 0;
}
