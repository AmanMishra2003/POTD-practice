//https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(int n) {
        return __builtin_popcount(n); //return number of set bits

        
        // int count = 0;//added n count variable 

        // //looped through the number untill number disappear
        // while(n){
        //     //if number and 1 gives 1 then the last bit is set bit therefore increase count by one place
        //     if((n&1)==1){
        //         count++;
        //     }

        //     // right shifted number by one place
        //     n>>=1;
        // }

        // return count;
    }
};