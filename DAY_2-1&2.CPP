// Question link: https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1
// time complexity o(n) space complexity o(1)
// approach
// check for continous more than 5 vowel otherwise if only 5 vowel is there than if it is accompanied by 2 question mark than it baecame bad  no similarly if there is 3  consonent todether then it
//  it is bad string else it is good string

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isGoodorBad(string S)
    {
        // code here
        int vow_count = 0;
        int cons_count = 0;

        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                vow_count++;
                cons_count = 0;
                if (vow_count > 5)
                {
                    return 0;
                }
            }
            else if (S[i] == '?')
            {
                vow_count++;
                cons_count++;
                if (vow_count > 5 || cons_count > 3)
                {
                    return 0;
                }
            }
            else
            {
                vow_count = 0;
                cons_count++;
                if (cons_count > 3)
                {
                    return 0;
                }
            }
        }
        if (vow_count > 5 || cons_count > 3)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    };

    cout << "~" << "\n";
    return 0;
} 

};

// question 2:: //Question link: https://www.geeksforgeeks.org/problems/good-or-bad-string1417/1
//  time complexity o(NlogN) , space complexity o(n)
// check for 0 index from nums1 if it equals nums2 0th index then add 1's index
class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i][0] == nums2[j][0])
                {
                    nums1[i][1] = nums1[i][1] + nums2[j][1];
                    nums2[j][0] = -1;
                }
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (nums2[i][0] != -1)
            {
                nums1.push_back({nums2[i][0], nums2[i][1]});
            }
        }

        sort(nums1.begin(), nums1.end());
        return nums1;
    }
};