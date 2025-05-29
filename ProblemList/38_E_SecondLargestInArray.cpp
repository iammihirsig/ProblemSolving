/*
Author : Mihir Raj Singh
Title : Find second largest element in array
Date & Time : 2025-05-28 20:23:13
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

// findSecondLargest finds and return the second largest element in array
int findSecondLargest(int arr[], int n)
{
  if (n == 0 || n == 1)
  {
    return -1;
  }

  int firstLargest = INT_MIN;
  int secondLargest = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > firstLargest)
    {
      secondLargest = firstLargest;
      firstLargest = arr[i];
    }
    else if (arr[i] > secondLargest && arr[i] != firstLargest)
    {
      secondLargest = arr[i];
    }
  }
  return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main()
{
  int arr[] = {2, 8, 1, 4, 10, 7};
  // int arr[] = {5, 5, 5}; // Output: -1 (no second largest)
  // int arr[] = {-3, -1, -7}; // Output: -3
  // int arr[] = {10}; // Output: -1
  // int arr[] = {}; // Output: -1
  // int arr[] = {10, 20, 20, 10}; // Output: 10
  int n = sizeof(arr) / sizeof(arr[0]);

  int second = findSecondLargest(arr, n);
  cout << "Second largest element: " << second << endl;

  return 0;
}
