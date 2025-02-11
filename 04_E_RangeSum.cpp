/*
Goal: To find the sum of number from x to y (x and y are user input).
NOTE: The idea is to subtract the start - 1 sum from full sum.

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
int sumOfn(int num)
{
  return (num * (num + 1)) / 2;
}

int findRangeSum(int start, int end)
{
  // Edge cases
  if (start > end)
  {
    return 0;
  }

  if (start == end)
  {
    return start;
  }

  // calculate sumOfn(end)
  int sumTill_end = sumOfn(end);

  // calculate sumOfn(start - 1)
  int sumTill_start_minus_one = sumOfn(start - 1);

  return (sumTill_end - sumTill_start_minus_one);
}

int main()
{
  // take inputs: start, end
  int start, end;
  cin >> start >> end;

  // call findRangeSum()
  int ans = findRangeSum(start, end);
  cout << "Range sum is: " << ans << endl;

  return 0;
}
