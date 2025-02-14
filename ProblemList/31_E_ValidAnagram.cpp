/*
Goal: To check whether two input string is a valid anagram or not
NOTE: (Problem Link: https://neetcode.io/problems/is-anagram)
*/

//------------------------------------------------------------------------------------
/* (Approach 1)
// TC: O(n log n + m log m)
// SC: O(1) or O(n + m) (Depends on sorting algoritm)

class Solution
{
public:
  bool isAnagram(string s, string t)
  {

    if (s.length() != t.length())
    {
      return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
  }
};
*/
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
/* (Approach 2)
// TC: O(n + m) // n is the length of string s and m is the length of string t
// SC: O(1) // at most we have only 26 different characters

class Solution
{
public:
  bool isAnagram(string s, string t)
  {

    if (s.length() != t.length())
    {
      return false;
    }

    unordered_map<char, int> countS;
    unordered_map<char, int> countT;

    for (int i = 0; i < s.length(); i++)
    {
      countS[s[i]]++;
      countT[t[i]]++;
    }

    return countS == countT;
  }
};
*/
//------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------
/* (Approach 3) Optimized
// TC: O(n + m) // n is the length of string s and m is the length of string t
// SC: O(1) // at most we have only 26 different characters

class Solution
{
public:
  bool isAnagram(string s, string t)
  {

    if (s.length() != t.length())
    {
      return false;
    }

    vector<int> count(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
      count[s[i] - 'a']++;
      count[t[i] - 'a']--;
    }

    for (int val : count)
    {
      if (val != 0)
      {
        return false;
      }
    }
    return true;
  }
};
*/
//------------------------------------------------------------------------------------
