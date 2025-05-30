/*
Author : Mihir Raj Singh
Title : The Famous Two Sum Problem
Date & Time : 2025-05-30 11:45:00
Time Complexity : O(n)
Space Complexity : O(n)
*/

#include <iostream>
#include <unordered_map> // for hash map
using namespace std;

// Function to find two indices such that arr[i] + arr[j] == target
void twoSum(int arr[], int n, int target)
{
  unordered_map<int, int> mp; // value -> index

  for (int i = 0; i < n; i++)
  {
    int complement = target - arr[i];
    if (mp.find(complement) != mp.end())
    {
      cout << "Indices: " << mp[complement] << ", " << i << endl;
      cout << "Values: " << arr[mp[complement]] << ", " << arr[i] << endl;
      return;
    }
    mp[arr[i]] = i;
  }

  cout << "No two numbers add up to the target." << endl;
}

int main()
{
  int arr[] = {2, 7, 11, 15};
  int target = 9;
  int n = sizeof(arr) / sizeof(arr[0]);
  twoSum(arr, n, target);
  return 0;
}
