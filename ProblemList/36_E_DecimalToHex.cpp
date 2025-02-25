/*
Goal: Convert Input Decimal No To Hexadecimal
NOTE:

TC: O(1)
SC: O(1)
*/
#include <iostream>
#include <sstream> // For stringstream
using namespace std;

int main()
{
  int decimal;
  cin >> decimal;

  // Convert Decimal to Hexadecimal
  stringstream ss;
  ss << hex << uppercase << decimal;
  string hexValue = ss.str();

  cout << "Hexadecimal: " << hexValue << endl;
  return 0;
}
