/*
Goal: Convert Input Octal No To Decimal
NOTE:

TC: O(1)
SC: O(1)
*/
#include <iostream>
using namespace std;

int main()
{
  string octal;
  cin >> octal;

  int decimal = stoi(octal, 0, 8); // Convert octal to decimal
  cout << "Decimal: " << decimal << endl;

  return 0;
}
