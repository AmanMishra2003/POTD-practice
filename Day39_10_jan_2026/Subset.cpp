//https://leetcode.com/problems/subsets/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = 1<<nums.size();

        for(int i=0 ;i<n;i++){
            vector<int> temp;
            int mask = i;
            int j=0;
            while(mask){
                if((mask&1)==1){
                    temp.push_back(nums[j]);
                }
                mask>>=1;
                j++;
            }
            ans.push_back(temp);
        }

        return ans;
    }
};