/*
Author : Mihir Raj Singh
Title : Move all 0 in array to end
Date & Time : 2025-05-30 10:54:36
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// moveAll0ToEnd moves all 0 to end in an array
void moveAll0ToEnd(int arr[], int n)
{
  int j = 0; // Points to next position for non-zero
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
}

int main()
{
  int arr[] = {0, 1, 0, 3, 12, 15, 0, 54, 84, 0, 0, 78, 5, 0, 89};
  // int arr[] = {0, 0, 0, 0};                // Output: 0 0 0 0
  // int arr[] = {1, 2, 3, 4};                // Output: 1 2 3 4
  // int arr[] = {0, 1, 0, 2, 0, 3};          // Output: 1 2 3 0 0 0
  // int arr[] = {1, 0, 2, 0, 3, 0, 4};       // Output: 1 2 3 4 0 0 0
  // int arr[] = {0};                         // Output: 0
  // int arr[] = {};                          // Output: (nothing)

  int n = sizeof(arr) / sizeof(arr[0]);
  moveAll0ToEnd(arr, n);
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
