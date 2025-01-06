# Problem Links
- [Neetcode](https://neetcode.io/problems/is-anagram)
- [Leetcode](https://leetcode.com/problems/valid-anagram/)

# Solutions
## Sorting Approach

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {

        // check for equal length
        if (s.length() != t.length()) {
            return false;
        }

        // sorting
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        // checking equality
        return s == t;
    }
};
```

- **TC: O(nlog<sub>n</sub> + mlog<sub>m</sub>)**
- **SC: O(1) or O(n+m) depending on the sorting algorithm.**


## Hashmap Approach
```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {

        // check size
        if (s.length() != t.length()) {
            return false;
        }

        // creating hashmaps
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        // increment count in hashmap
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        // checking equality of hashmap
        return countS == countT;
    }
};
```
- **TC: O(n+m)**
- **SC: O(1) since we have atmost 26 characters**

## Vector Approach

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {

        // checking length
        if (s.length() != t.length()) {
            return false;
        }

        // creating vector
        vector<int> count(26, 0);

        // iterating and counting
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // till now if these are anagrams, every values in count must be 0

        // iterating on vector to check
        for (auto value : count) {
            if (value != 0) {
                return false;
            }
        }

        // else true
        return true;
    }
};
```
- **TC: O(n+m)**
- **SC: O(1) since we have atmost 26 characters**
