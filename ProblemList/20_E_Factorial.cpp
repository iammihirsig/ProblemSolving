/*
Goal: To find the factorial of a number
NOTE:

TC: O(n)
SC: O(1)

*/
#include <iostream>
using namespace std;

// function declaration
long long factorial(int num)
{
  long long ans = 1; // Fix: Change int to long long
  for (int i = 1; i <= num; i++)
  {
    ans *= i;
  }
  return ans;
}

// main code
int main()
{
  // take input
  int n;
  cin >> n;

  // call Findfactorial()
  long long ans = factorial(n);
  cout << "Factorial Is: " << ans << endl;

  return 0;
}
