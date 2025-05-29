/*
Author : Mihir Raj Singh
Title : Reverse the array using 2 pointer approach
Date & Time : 2025-05-29 09:57:56
Time Complexity : O(n)
Space Complexity : O(1)
*/

#include <iostream>
using namespace std;

// reverseArray reverse the actual array using 2 pointer approach
void reverseArray(int arr[], int n)
{
  int leftPointer = 0;
  int rightPointer = n - 1;
  while (leftPointer < rightPointer)
  {
    swap(arr[leftPointer], arr[rightPointer]);
    leftPointer++;
    rightPointer--;
  }
}

int main()
{
  // int arr[] = {1, 2, 3, 4, 5}; // Expected output: 5 4 3 2 1
  // int arr[] = {-10, 0, 5, -3, 8}; // Expected output: 8 -3 5 0 -10
  // int arr[] = {42}; // Expected output: 42
  // int arr[] = {}; // Expected output: (no output, array remains empty)
  // int arr[] = {2, 2, 2, 2}; // Expected output: 2 2 2 2
  int arr[] = {1, 3, 5, 7, 9, 11}; // Expected output: 11 9 7 5 3 1
  int n = sizeof(arr) / sizeof(arr[0]);

  if (n == 0)
  {
    cout << "Nothing to reverse" << endl;
    return 0;
  }
  else if (n == 1)
  {
    cout << "Already reversed: " << arr[0] << endl;
    return 0;
  }
  else
  {
    reverseArray(arr, n);
    cout << "Reversed Array: ";
    for (auto i : arr)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
