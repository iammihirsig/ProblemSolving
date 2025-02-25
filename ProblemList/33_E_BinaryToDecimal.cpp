/*
Goal: Convert Input Binary No To Decimal
NOTE:

TC: O(n) where n is the length of the string.
SC: O(1)
*/
#include <iostream>
using namespace std;

int main()
{
  string binary;
  cin >> binary;

  int decimal = stoi(binary, 0, 2);
  cout << "Decimal: " << decimal << endl;
  return 0;
}
