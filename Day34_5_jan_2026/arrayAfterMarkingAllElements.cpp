//https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements/description/

class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        int n = nums.size();

        for(int i=0;i<nums.size();i++){
            pq.push(make_pair(nums[i],i));//used pair to sort in element with there indices
        }

        long long int sum = 0;

        while(!pq.empty()){
            int num = pq.top().first; 
            int idx = pq.top().second;
            
            //if nums[idx]!=0 then make there adjacent element 0
            if(nums[idx]!=0){
                if(idx>0) nums[idx - 1] = 0;
                if(idx+1 < n) nums[idx + 1] = 0;
            }
            pq.pop();
        }

        //add all non zero elements
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};