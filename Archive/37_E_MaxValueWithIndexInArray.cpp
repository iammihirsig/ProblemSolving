/*
Author : Mihir Raj Singh
Title : Find max value with index in array
Date & Time : 2025-05-28 19:38:11
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
#include <utility> // for pair
using namespace std;

// getMaxWithIndex finds the maximum element of array and return it with it's index
pair<int, int> getMaxWithIndex(int arr[], int n)
{
  // edge case, if n is 0
  if (n == 0)
  {
    return {-1, -1};
  }

  int maxValue = arr[0];
  int maxValueIndex = 0;

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxValue)
    {
      maxValue = arr[i];
      maxValueIndex = i;
    }
  }
  return {maxValue, maxValueIndex};
}

int main()
{
  int arr[] = {2, 8, 1, 4, 10, 7};
  int n = sizeof(arr) / sizeof(arr[0]); // calculate size of array
  pair<int, int> ans = getMaxWithIndex(arr, n);
  cout << "Max element is: " << ans.first << " and index is: " << ans.second << endl;
  return 0;
}
