/*
Goal: To check whether an array contains duplicate or not
NOTE: (Problem Link: https://neetcode.io/problems/duplicate-integer)
*/

//------------------------------------------------------------------------------------
/* (Approach 1)
// TC: O(n^2)
// SC: O(1)

class Solution
{
public:
  bool hasDuplicate(vector<int> &nums)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] == nums[j])
        {
          return true;
        }
      }
    }
    return false;
  }
};
*/
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
/* (Approach 2)
// TC: O(n log n)
// SC: O(1)

class Solution
{
public:
  bool hasDuplicate(vector<int> &nums)
  {

    // sort first
    sort(nums.begin(), nums.end());

    // now compare adjacent elements
    for (int i = 1; i < nums.size(); i++)
    {
      if (nums[i] == nums[i - 1])
      {
        return true;
      }
    }
    return false;
  }
};
*/
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
/* (Approach 3) Optimized
// TC: O(n)
// SC: O(n)

class Solution
{
public:
  bool hasDuplicate(vector<int> &nums)
  {

    unordered_set<int> seen;
    for (int num : nums)
    {
      if (seen.count(num))
      {
        return true;
      }
      seen.insert(num);
    }
    return false;
  }
};
*/
//------------------------------------------------------------------------------------
