/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=0; 
        int sell=1;

        int profit =0;
        int maxProfit = 0;

        while(sell<prices.size()){
            profit = prices[sell] - prices[buy]; //calculating profit

            if(profit>0) maxProfit = max(profit, maxProfit); //storing maxProfit

            if(prices[sell]>prices[buy]) sell++; //if sell prices is greater than buy we simply increase sell index to check there exist much bigger prices or not
            else{
                //it buy prices is greater than sell price we simply jump buy to sell index and inc sell index
                buy=sell;
                sell++;
            }
        }

        return maxProfit;
        
    }
};