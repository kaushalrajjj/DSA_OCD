Topic : Binary_Search
Level : Medium
Question_1 :
https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=k-th-element-of-two-sorted-array
Question_2 :
https://leetcode.com/problems/search-a-2d-matrix/
Question_3 :
https://leetcode.com/problems/search-a-2d-matrix-ii/description/
//q1
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        return a[k-1];
        
    }
};
//q2
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int low=0,high=matrix.size();
        while(low<high){
            int mid=(low+high)/2;
            for(int i=0;i<matrix[mid].size();i++){
                if(matrix[mid][i]==target){
                    return true;
                } 
            }
            if(matrix[mid][0]>target){
                high=mid;
            }else {
                low=mid+1;
            }
        }
        return false;
        
    }
};

///3

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int c=matrix[0].size()-1,row=matrix.size();
      int r=0;
      while(c>=0&&r<row){
        if(matrix[r][c]==target) return true;
        else if(matrix[r][c]<target) r++;
        else c--;
      }
     return false;

    }
};
