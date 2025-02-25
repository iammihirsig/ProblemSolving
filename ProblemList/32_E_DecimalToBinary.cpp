/*
Goal: Convert Input Decimal No To Binary
NOTE:

TC: O(log(n))
Time complexity is O(𝑏), where b is the number of bits in an integer (usually 32 or 64).
The loop runs bits times (32 or 64 iterations), so it's actually O(𝑏) = O(32) ≈ O(1) in practice, but technically it's O(log n) because the number of bits is log(n) in base 2.
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration & definition start
string decimalToBinary(int n)
{
  // calculate bits
  int bits = sizeof(int) * 8;

  // create empty binary
  string binary = "";
  bool leadingOne = false; // to remove leading zero

  for (int i = bits - 1; i >= 0; i--)
  {
    if ((n >> i) & 1)
    {
      leadingOne = true; // mark when first '1' appear
    }

    if (leadingOne) // start adding only after first '1' appear
    {
      binary += ((n >> i) & 1) ? "1" : "0";
    }
  }
  return binary.empty() ? "0" : binary;
}

// function declaration & definition end

int main()
{
  int num;
  cin >> num;

  string binary = decimalToBinary(num);
  cout << "Binary: " << binary << endl;

  return 0;
}
