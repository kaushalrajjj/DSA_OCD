//q:1  https://leetcode.com/problems/move-zeroes/description/
//t=O(n) S=O(1)
//move zero
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int l=0 ;
             for(int r=0;r<nums.size();r++){
                if(nums[r]!=0){
                    swap(nums[l],nums[r]);
                    l++;
                    
                } 
             } 
    
        }
    };
    
    
    //q=2  https://leetcode.com/problems/rotate-array/description/
    //rotate array
    //t=O(n) S=O(1)
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