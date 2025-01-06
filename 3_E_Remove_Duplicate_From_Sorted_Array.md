# Problem Links
- [Leetcode](https://leetcode.com/problems/remove-duplicates-from-sorted-array)

# Solutions
## 2 Pointer Approach

```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }

        // return last value as i + 1
        return i + 1;
    }
};
```

- **TC: O(n)**
- **SC: O(1)**
