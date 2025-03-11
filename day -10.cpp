//topic : array

//level : medium (good problem)

//q-1 : https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
//q-2: https://leetcode.com/problems/next-permutation/description/
//q-3: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//Q1
//t=O(n) S=O(n)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        int l=0,k=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                v[l]=nums[i];
                l=l+2;
            }
             if(nums[i]<0){
                v[k]=nums[i];
                k=k+2;
            }
        }
        return v;
    }
};

//Q2











//Q3
//t=O(n) S=O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int mi=INT_MAX;

        for (int i=0;i<prices.size();i++){
            mi= min(mi,prices[i]);
            profit= max(profit, prices[i]-mi);
        }
        return profit;

        
    }
};
