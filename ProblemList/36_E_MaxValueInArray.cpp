/*
Author : Mihir Raj Singh
Title : Find maximum element in an array
Date & Time : 2025-05-28 18:44:51
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// findMax finds and return maximum element in array
int findMax(int arr[], int n)
{
  // edge case if n == 0
  if (n == 0)
  {
    return -1;
  }

  int maxElement = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxElement)
    {
      maxElement = arr[i];
    }
  }
  return maxElement;
}

int main()
{
  int arr[] = {2, 8, 1, 4, 10, 7};
  // int arr[] = {-3, -7, -1, -5};
  // int arr[] = {5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Max element: " << findMax(arr, n) << endl;
  return 0;
}
