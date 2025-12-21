/*
https://leetcode.com/problems/water-bottles/
*/

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int emptyBottle = 0;
        int filledBottle = numBottles;
        int ans=0;

        while(filledBottle>0){
            ans += filledBottle;//added to ans
            emptyBottle += filledBottle; //got empty
            filledBottle = emptyBottle/numExchange; //next filledBatch after exchange
            emptyBottle = emptyBottle%numExchange; //next empty batch
        }


        return ans;
        
    }
};