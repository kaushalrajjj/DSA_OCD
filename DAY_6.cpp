//Question 1:Most visited sector in a circular track
//https://leetcode.com/problems/most-visited-sector-in-a-circular-track/description/?envType=problem-list-v2&envId=array



#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> mostVisited(int n, vector<int>& rounds) {
           
        int start = rounds[0], end = rounds.back();
        vector<int> result;
    
        if (start <= end) {
            for (int i = start; i <= end; i++) {
                result.push_back(i);
            }
        } else {
            for (int i = 1; i <= end; i++) {
                result.push_back(i);
            }
            for (int i = start; i <= n; i++) {
                result.push_back(i);
            }
        }
        return result;
    
            
        }
    };
    
    //Question 2:Stock Span Problem
    //https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1
    
    
     vector<int> calculateSpan(vector<int>& arr) {
        int n = arr.size();  
        stack<int> st;
        vector<int> span(n);
    
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            span[i] = (st.empty()) ? (i + 1) : (i - st.top());
            st.push(i);
        }
        return span;
    };
    