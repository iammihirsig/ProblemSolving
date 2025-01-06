# Problem Links
- [Neetcode](https://neetcode.io/problems/duplicate-integer)
- [Leetcode](https://leetcode.com/problems/contains-duplicate/)

# Solutions
## Brute Force Approach

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;
    }
};
```

- **TC: O(n<sup>2</sup>)**
- **SC: O(1)**

## Sorting Approach

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};
```

- **TC: O(nlogn)**
- **SC: O(1) or O(n) depends upon sorting algo**


## Unordered Set Approach (Best)

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for (auto num : nums) {
            if (seen.count(num)) {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};
```

- **TC: O(n)**
- **SC: O(n)**
