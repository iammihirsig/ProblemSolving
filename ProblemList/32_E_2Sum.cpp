/*
Goal: To return an index pair which values count up to the target sum in an array
NOTE: (Problem Link: https://neetcode.io/problems/two-integer-sum)
*/

//------------------------------------------------------------------------------------
/* (Approach 1)
// TC: O(n^2)
// SC: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();
        vector<int> ans;

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    ans.emplace_back(i);
                    ans.emplace_back(j);
                }
            }
        }
        return ans;
    }
};
*/

//------------------------------------------------------------------------------------
/* (Approach 2)
// TC: O(n)
// SC: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // store the size
        int size = nums.size();

        // create unordered_map to keep track of index and value
        unordered_map<int, int> um;

        for (int i = 0; i < size; i++) {
            int diff = target - nums[i];
            if (um.find(diff) != um.end()) {
                return {um[diff], i};
            }
            um.insert({nums[i], i});
        }
        return {};
    }
};

*/
