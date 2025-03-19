Topic : Strings
Level : Easy
Question_1 :
https://leetcode.com/problems/isomorphic-strings/description/
Question_2 :
https://leetcode.com/problems/remove-outermost-parentheses/description/

 

//Q2

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(count >0) ans+=s[i];
                count ++;
            }else{
            count--;
             if(count >0) ans+=s[i];}
            
        }
        return ans;
    }
};
