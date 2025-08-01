// Problem name: 2 sum (https://leetcode.com/problems/two-sum/)

// =============== First brute force solution ===============
/*
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    // store index
    vector<int> ans;

    // traverse array and compare elements
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
        {
          ans.push_back(i);
          ans.push_back(j);
        }
      }
    }
    return ans;
  }
};
*/
// TC: O(n²)
// SC: O(1)

// =============== Second brute force solution ===============
/*
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {

    // traverse array and compare elements
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
        {
          // if answer is found immediately return
          return {i,j};
        }
      }
    }
    // return empty vector
    return {};
  }
};
*/
// TC: O(n²)
// SC: O(1)
