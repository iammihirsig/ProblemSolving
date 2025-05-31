/*
Author : Mihir Raj Singh
Title : Left rotate array by k elements
Date & Time : 2025-05-29 10:50:57
Time Complexity : O(n)
Space Complexity : O(1)

Approach:
- reverse first k elements
- reverse (n - k) elements
- reverse entire array
*/

#include <iostream>
using namespace std;

// reverseArray reverse the actual array using 2 pointer approach taking start and end as input
void reverseArray(int arr[], int start, int end)
{
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

// leftRotateArrayByK will left rotate array by k
void leftRotateArrayByK(int arr[], int n, int k)
{
  // Handle if k > n
  k = k % n;

  // Step 1: reverse first k elements
  reverseArray(arr, 0, k - 1);

  // Step 2: reverse remaining n-k elements
  reverseArray(arr, k, n - 1);

  // Step 3: reverse entire array
  reverseArray(arr, 0, n - 1);
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int k = 2;
  int n = sizeof(arr) / sizeof(arr[0]);
  leftRotateArrayByK(arr, n, k);
  cout << "Left Rotated Array By " << k << " is: ";
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
