/*
Goal: To find the sum of first 'N' Natural number.
NOTE: Two different methods are discussed.

sumOfn_method1() // Brute force method
  TC: O(n)
  SC: O(1)

sumOfn_method2() // Optimal method
  TC: O(1)
  SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
int sumOfn_method1(int num)
{
  int finalSum = 0;
  for (int i = 1; i <= num; i++)
  {
    finalSum += i;
  }
  return finalSum;
}

int sumOfn_method2(int num)
{
  return (num * (num + 1)) / 2;
}

int main()
{
  // take input num
  int num;
  cin >> num;

  // call sumOfn_method1()
  int ans = sumOfn_method1(num);
  cout << "Answer from sumOfn_method1: " << ans << endl;

  // call sumOfn_method2()
  ans = sumOfn_method2(num);
  cout << "Answer from sumOfn_method2: " << ans << endl;

  return 0;
}
