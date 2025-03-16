// Topic : Binary_Search
// Level : Medium 
// Question_1 :
// https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
// Question_2 :
// https://leetcode.com/problems/koko-eating-bananas/description/
// Question_3 :
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
//Q1

class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        if(n==0||n==1)return n;
        int low=0,high=n;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            int sq=mid*mid;
            if(sq<=n){
              ans=mid  ;
            }
        if(sq>n){
            high=mid-1;
            
        }else{
            low=mid+1;
            ans=mid;
             
        }
        }return ans;
    }
};

//Q2

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
       int n = nums.size();
    if (n > threshold) return -1;
    int low = 1, high = *max_element(nums.begin(), nums.end());
 
    while (low <= high) {
        int mid = (low + high) / 2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum += ceil((double)(nums[i]) / (double)(mid));
        }
        if (sum <= threshold) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
    }
};

//Q3  koko eating banana 

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<high){

            int time=0;
            int mid=(low+high)/2;

            for(int i=0;i<piles.size();i++){
                time+=ceil((double)piles[i]/ mid);    //double for floating nummber

            }
            
            if(time<=h){
                high=mid;
               
            }else{
                low=mid+1;
            }

        }
        return low;
    }
};
