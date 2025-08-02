// Problem name: Moves Zeros (https://leetcode.com/problems/move-zeroes/)

// =============== First brute force solution ===============
/*
class Solution {
public:
  void moveZeroes(vector<int>& nums) {

    // let's use overwrite method
    // pull all non zero to fron starting from index 0
    // rest all we will overwrite with 0

    // first insert position starting from from '0 - index'
    int insertPos = 0;

    // pull all elements to front
    for (int num : nums) {
      if (num != 0) {
        nums[insertPos++] = num;
      }
    }

    // replace all remaining elements with 0
    while (insertPos < nums.size()) {
      nums[insertPos++] = 0;
    }

    // we don't need to return anything.
    }
};
*/
// TC: O(n)
// SC: O(1)
