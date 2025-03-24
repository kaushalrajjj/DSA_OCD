📅 *Schedule for day22:*

❓ Q1: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
❓ Q2: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/

//Q1
class Solution {
public:
    int minAddToMakeValid(string s) {

       int open =0;
       int close=0;
       for(char c :s){
        if(c=='('){
            open++;
        }else{
            if(open >0){
                open--;
            }else{
                close++;
            }
        }
       }
       return open + close;
    }
};


//Q2



