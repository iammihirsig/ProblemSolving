/*
Goal: Convert Input Decimal No To Hexadecimal
NOTE:

TC: O(N) (where N is the length of the input hex string)
SC: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
  string hexValue;
  cin >> hexValue;

  // Convert Hex to Decimal using stoi()
  int decimal = stoi(hexValue, 0, 16);

  cout << "Decimal: " << decimal << endl;
  return 0;
}
