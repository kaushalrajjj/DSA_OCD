Topic : Binary_Search

level;Medium 

q-1: https://leetcode.com/problems/find-a-peak-element-ii/description/
q-2: https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1
//Q1

//Q2

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
         vector<int> v;
         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[i].size();j++){
                 v.push_back(mat[i][j]);
             }
         }
         sort(v.begin(),v.end());
         
        return v[v.size()/2];
    }
};


Bonus Problem : 

Company : Apple

q-1: https://leetcode.com/problems/rotate-array/description/
q-2: https://leetcode.com/problems/first-unique-character-in-a-string/description/


//Q1

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          int n = nums.size();
    k = k % n; 
    
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());

    }
};

//Q2

class Solution {
public:
    int firstUniqChar(string s) {
       
         vector<int> v(26,0);
         for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
         }
         for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==1){
                return i;
            }
         }
       return -1;
    }
};
