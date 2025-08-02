// Problem name: Contains Duplicate (https://leetcode.com/problems/contains-duplicate/)

// =============== First brute force solution ===============
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // make a hash set
        unordered_set<int> us;

        // loop through vector
        for (int x : nums) {
            if (us.count(x)) {
                return true;
            }
            us.insert(x);
        }
        return false;
    }
};
*/
// TC: O(n)
// SC: O(n)
