/*
Author : Mihir Raj Singh
Title : Print all factors of user input numbers
Date & Time : 2025-05-25 12:20:15
Time Complexity : O(√N + K log K), where K ≤ 2√N
Space Complexity : O(√N)
*/

#include <iostream>
#include <vector>    // for ascendingNumbers
#include <algorithm> // for sort
using namespace std;

// print_all_factors find and print all factors of a number
void print_all_factors(int val)
{
  vector<int> ascendingNumbers;
  for (int i = 1; i * i <= val; i++)
  {
    if (val % i == 0)
    {
      if (val / i == i)
      {
        ascendingNumbers.push_back(i);
      }
      else
      {
        ascendingNumbers.push_back(i);
        ascendingNumbers.push_back(val / i);
      }
    }
  }

  // sort and print the ascendingNumbers
  sort(ascendingNumbers.begin(), ascendingNumbers.end());

  // print it
  for (auto i : ascendingNumbers)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  int inputNumber;
  cout << "Enter a number: ";
  cin >> inputNumber;
  print_all_factors(inputNumber);
  return 0;
}
