📅 *Schedule for day:*

// ❓ Q1: https://leetcode.com/problems/valid-anagram/description/
// ❓ Q2: https://leetcode.com/problems/longest-common-prefix/description/

// Q1
  //valid anagram
  class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
        return true;
        }else return false;

    }
};

//Q2 longest-common-prefix
// Time Complexity - O(N) N- length of the string
// Space Complexity - O(N)
 class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
        sort(strs.begin(), strs.end());
        string firstStr = strs[0];
        string lastStr = strs[n - 1];
        vector<char> first(firstStr.begin(), firstStr.end());
        vector<char> last(lastStr.begin(), lastStr.end());
        string result = "";
        int minLength = min(first.size(), last.size());
        for (int i = 0; i < minLength; i++)
        {
            if (first[i] == last[i])
            {
                result += first[i];
            }
            else
                break;
        }
        return result;
    }
};
