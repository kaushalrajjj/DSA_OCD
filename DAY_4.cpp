Day_04
Question_1
https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math
//t=O(1)
//S=O(1)
//for every number there is number-1 which give remainder 1
class Solution {
public:
   int distinctIntegers(int n) {
    return (n == 1) ? 1 : (n - 1);
}

};



Question_2
https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1 
//t=o(nlogn)
//s=o(n)
// creating difference array and sorting it ta get min output as arr 1st element
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        vector<int> v;
        for (int i=0;i<a.size()-m+1;i++){
            v.push_back(a[i+m-1]-a[i]);
        }
         sort(v.begin(),v.end());
         return v[0];
    }
};