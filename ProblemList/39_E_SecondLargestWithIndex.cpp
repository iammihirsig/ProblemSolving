/*
Author : Mihir Raj Singh
Title : Find second largest element in array with it's index
Date & Time : 2025-05-29 09:36:21
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
#include <utility> // for pair
#include <climits> // for INT_MIN

using namespace std;

// getSecondLargestWithIndex finds and returns second largest element in array with it's index
pair<int, int> getSecondLargestWithIndex(const int arr[], int n)
{
  if (n == 0 || n == 1)
  {
    return {-1, -1};
  }

  int firstElement = INT_MIN;
  int secondElement = INT_MIN;
  int firstElementIndex = -1;
  int secondElementIndex = -1;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > firstElement)
    {
      secondElement = firstElement;
      secondElementIndex = firstElementIndex;
      firstElement = arr[i];
      firstElementIndex = i;
    }
    else if (arr[i] > secondElement && arr[i] != firstElement)
    {
      secondElement = arr[i];
      secondElementIndex = i;
    }
  }
  if (secondElement != INT_MIN && secondElementIndex != -1)
  {
    return {secondElement, secondElementIndex};
  }
  else
  {
    return {-1, -1};
  }
}

int main()
{
  // int arr[] = {2, 8, 1, 4, 10, 7}; // Second largest = 8, Index = 1
  // int arr[] = {10, 5, 20, 15};     // Second largest = 15, Index = 3
  // int arr[] = {5}; // Output: {-1, -1} (not enough elements)
  // int arr[] = {}; // Output: {-1, -1} (empty array)
  // int arr[] = {10, 10, 10}; // Output: {-1, -1} (no second largest)
  // int arr[] = {-10, -20, -5, -1}; // Second largest = -5, Index = 2
  // int arr[] = {10, 20, 10, 30, 30}; // Second largest = 20, Index = 1
  // int arr[] = {100, 50, 100, 75}; // Second largest = 75, Index = 3
  int arr[] = {1, 2, 3, 4, 5}; // Second largest = 4, Index = 3

  int n = sizeof(arr) / sizeof(arr[0]);
  pair<int, int> ans = getSecondLargestWithIndex(arr, n);
  cout << "Second largest element is: " << ans.first << " and it's index is: " << ans.second << endl;
  return 0;
}
