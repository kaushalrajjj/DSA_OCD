Topic : Binary_Search
Level : Moderate 
Question_1 :
https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401
Question_2 :
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
Question_3 : 
https://leetcode.com/problems/search-in-rotated-sorted-array/

//Q1
//T=O(n)
//S=O(1)
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
                pair<int,int> p={-1,-1};
				for(int i=0;i<n;i++){
					if(a[i]==x){
						p.first=a[i];
						p.second=a[i];
						break;


					}else if(a[i]<x){
						p.first=a[i];

					}
					else  if(a[i]>x){
						p.second=a[i];
						break;
					}
				}
				return p;

}

//q2
//T=O(logN)
//S=O(1)
class Solution {
public:
    int findMin(vector<int>& nums) {
   
     int low = 0, high = nums.size() - 1;
 int min =nums[low];
        while (low <= high) {
       
        if(nums[low]<=min){
            min =nums[low];
        }
        low++;

        
        }return min;

    }
};

///q3
//T=O(logN)
//S=O(1)
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low=0;
          
          int high= nums.size()-1;
        
           
           
         while(low<=high)
          {
             int mid=(low+high )/2;
             if(nums[mid]==target)
             {
                return mid;
             }
            
              if(nums[low]<=nums[mid])    
              {
                if (nums[low]<= target && target<=nums[mid])     
                {
                    high=mid-1;
                }
               else{                           
                low=mid+1;
               }
              }
              else if(nums[mid]<=target && nums[high]>=target)
              {
                low=mid+1;
              }else {
                high=mid-1;
              }

              
          }
      return -1;
    }
};

