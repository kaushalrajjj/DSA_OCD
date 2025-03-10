// Problem 01 --> Can Place Flowers(leetcode 605)
// https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy
// Code:-



class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
             int i, countPlace = 0;
            if(n == 0){return true;}
            if(flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1){return true;}
            if(flowerbed.size() == 1 && flowerbed[0] == 1 && n == 1){return false;}
            if(flowerbed[0] == 0 && flowerbed[1] == 0){
                flowerbed[0] = 1;
                countPlace++;
            }
            for(i = 1; i < flowerbed.size() - 1; i++){
                if(flowerbed[i] == 0){
                    if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                        flowerbed[i] = 1;
                        countPlace++;
                    }
                }
            }
            if(flowerbed[flowerbed.size()-2]==0 && flowerbed[flowerbed.size()-1]==0){
                flowerbed[flowerbed.size()-1] = 1;
                countPlace++;
            }
            if(countPlace >= n){return true;}
            else{return false;}
        }
    };
    
    // Time Complexity = O(N)
    // Space Complexity = O(1)
    
    // approach : first I've started a loop which watch out for the spaces where flower can be placed. If such a place is found then, I've placed a flower there and examined increased the count variable
    //            which holds the count for suitable places after flower is placed and the process is continued in same way. Furthermore, I've put some border conditions and some extra control statements
    //            to handle some testcases.