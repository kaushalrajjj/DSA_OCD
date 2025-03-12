Topic : Binary_Search
Level: Easy
Question_1 :
https://leetcode.com/problems/binary-search/description/
Question_2 :
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
Question_3 :
https://leetcode.com/problems/search-insert-position/description/

//Q1
///time comp=(log(N))
//S=O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
       
       int l=0,h=nums.size();
       while(l<h){
        int mid=(l+h)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            h=mid;
        }else{
            l=mid+1;
        }
       }
       return -1;
        
    }
};

/Q2

///time comp=(log(N))
//S=O(1)


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         
        int low=0,high =nums.size();
         

        vector<int> v={-1,-1};
        
         while(low<high){
             int mid=(low+high)/2;
             if(nums[0]==target){
            v[0]=0;
         }
             if(nums[mid]>=target){
                high=mid;
                if(nums[mid]==target)
               { v[0]=mid;}
             }else{
                low=mid+1;
             }
         }
         low=0,high =nums.size();
         while(low<high){
            int mid=(low+high)/2;
             if(nums[high-1]==target){
            v[1]=high-1;
         }
             if(nums[mid]<=target){
                low=mid+1;
                if(nums[mid]==target)
               { v[1]=mid;}
             }else{
                high=mid;
             }

         }
        
     
         return v;


    }
};


//Q3
///time comp=(log(N))
//S=O(1)


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int l=0,h=nums.size();
       int ans=nums.size();
       while(l<h){
        int mid=(l+h)/2;
          if(nums[mid]>=target){
            ans =mid;
            h=mid;

        }else{
            l=mid+1;
        }
       }
       return ans;
        
    }
};


 

