/*
https://leetcode.com/problems/maximum-subarray/ (KADANE ALGO)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //optimal Approach--> Kadane Algorithm -->O(n)
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            maxSum = max(sum, maxSum);
            //if sum is negative then adding a number will reduce our maxSum then we don't need to include negative index at start
            if(sum<0){
                sum = 0;
                continue;
            }
        }
        return maxSum;
    }
};