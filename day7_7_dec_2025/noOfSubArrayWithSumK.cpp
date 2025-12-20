/*
https://leetcode.com/problems/subarray-sum-equals-k/
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //optimal approach --> O(n)
        int sum = 0;
        int count = 0;

        unordered_map<int, int> umap; //storing number and occurance
        umap[0]=1;

        //we need k so we are subtracting subarray with sum(totalsum-k) from subarray with sum(totalsum) so we can find subarray with sum k
        // sum = k + t
        //since, there can be multiple instance of multiple subarray of sum(totalSum - k) therefore we are storing count.

        for(int i=0;i<nums.size();i++){
            sum+=nums[i]; //add a prefix sum

            //check sum - k exist in hasmap or not
            if(umap.find(sum-k)!=umap.end()){
                count+=umap[sum-k]; // if exist we inc count by number of occurance
            }

            umap[sum]++;//add and inc the occurance of sum in hasmap
        }

        return count;
    }
};


/*
Brute Force Solution

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int count=0;

       for(int i=0;i<nums.size();i++){
        int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
       }

       return count;
    }

};

*/