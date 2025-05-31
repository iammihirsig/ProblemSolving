/*
Author : Mihir Raj Singh
Title : Contains Duplicate
Date & Time : 2025-05-31 10:05:00
Time Complexity : O(n)
Space Complexity : O(n)
*/

#include <iostream>
#include <unordered_set> // for hashset
using namespace std;

// containsDuplicate returns true if any element appears more than once
bool containsDuplicate(int arr[], int n)
{
  // logic goes here
  unordered_set<int> seen;
  for (int i = 0; i < n; i++)
  {
    if (seen.find(arr[i]) != seen.end())
    {
      return true;
    }
    seen.insert(arr[i]);
  }
  return false;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  if (containsDuplicate(arr, n))
  {
    cout << "Duplicate found" << endl;
  }
  else
  {
    cout << "No duplicates" << endl;
  }

  return 0;
}
