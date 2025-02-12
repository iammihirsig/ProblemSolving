/*
Goal: To print the nth term of fibonacci series
NOTE:


TC: O(n)
SC: O(1)

*/
#include <iostream>
#include <math.h>
using namespace std;

// function declaration
int nthFibo(int n)
{
  if (n == 1 || n == 2)
  {
    return n - 1;
  }

  int a = 0, b = 1, result = 1;
  for (int i = 3; i <= n; i++)
  {
    result = a + b;
    a = b;
    b = result;
  }
  return result;
}

// main code
int main()
{
  // take input
  int n;
  cin >> n;

  // call printFibo()
  int ans = nthFibo(n);
  cout << n << " term of fibonacci: " << ans << endl;

  return 0;
}
