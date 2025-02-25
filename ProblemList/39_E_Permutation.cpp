/*
Goal: To find possible sitting arrangement using permutation
NOTE:

TC: O(n)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration and definition starts
int factorial(int n)
{
  int ans = 1;
  for (int i = 1; i <= n; i++)
  {
    ans *= i;
  }
  return ans;
}
// function declaration and definition ends

int main()
{
  int n, r;
  cout << "Enter Total No Of People: ";
  cin >> n;
  cout << "Enter Total No Of Seats: ";
  cin >> r;

  cout << "Possible sitting arrangement using permutation: " << factorial(n) / factorial(n - r) << endl;

  return 0;
}
