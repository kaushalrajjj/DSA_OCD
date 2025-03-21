// 📅 *Schedule for day:*

// ❓ Q1: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// ❓ Q2: https://leetcode.com/problems/roman-to-integer/
//Q1
//T=O(N)
//S=O(1)
class Solution {
public:
    int maxDepth(string s) {
        

        int ans= 0;
        int count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                  
                count ++;
                 if(count>ans){
                    ans=count;
                 }
            }else if(s[i]==')'){
            count--;
             }
            
        }
        return ans;
    }
};
//Q2
//T=O(N)
//S=O(1)
class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        for (int i=0;i<s.size();i++){
            if(s[i]=='M'){
                
                sum=sum+1000;
            }else if(s[i]=='D'){
                sum=sum+500;
            }else if(s[i]=='C'){
                 if(s[i+1]=='D'){
                    sum=sum+400;
                    i++;
                }else if(s[i+1]=='M'){
                    sum=sum+900;
                    i++;
                }else{
                     sum=sum+100;
                }
                  }
                   else
             if(s[i]=='L'){
                sum=sum+50;
            }else
             if(s[i]=='X'){
                 if(s[i+1]=='L'){
                    sum=sum+40;
                    i++;
                }else if(s[i+1]=='C'){
                    sum=sum+90;
                    i++;
                }else{
                     sum=sum+10;

                }
            }else
             if(s[i]=='V'){
                sum=sum+5;
            }else
             if(s[i]=='I'){
                if(s[i+1]=='V'){
                    sum=sum+4;
                    i++;
                }else if(s[i+1]=='X'){
                    sum=sum+9;
                    i++;
                }else{
                     sum=sum+1;

                }
               
            }
             
        }
        return sum;
    }
};
