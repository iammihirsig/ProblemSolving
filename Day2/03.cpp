// Problem name: Valid Palindrome (https://leetcode.com/problems/valid-palindrome/)

// =============== First brute force solution ===============
/*
class Solution {
public:
  bool isPalindrome(string s) {

      // define a blank newString
      string newString = "";

      // let's recognise characters and form a new alphanumeric string
      for (char c : s) {
        if (isalnum(c)) {
          newString +=
          tolower(c); // converting to lowercase and add to newString
          }
      }

      // let's check for palindrome using 2 pointer approach
      int start = 0, end = newString.size() - 1;

      // traversing and checking
      while (start <= end) {
        if (newString[start] != newString[end])
          return false;
        else {
          start++;
          end--;
        }
      }
      return true; // if all are same
  }
};
*/
// TC: O(n)
// SC: O(n)
