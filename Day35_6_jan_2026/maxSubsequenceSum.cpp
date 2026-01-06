//https://leetcode.com/problems/maximum-subsequence-score/

class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> arr;

        int n = nums1.size();

        for( int i=0;i<n;i++ ){
            arr.push_back({nums2[i],nums1[i]}); //stored value in 
        }

        sort(arr.rbegin(),arr.rend()); //sort vector of pair by second arr--> nums2

        priority_queue<int, vector<int>, greater<int>> pq;//min_heap

        long long sum = 0; //storing sum
        long long max_ans = 0; //storing maxSum

        for(auto i:arr){
            int min = i.first; //min element from nums2
            int ele = i.second; //ele from nums2

            sum+=ele; //storing sum
            pq.push(ele); //pushing ele to pq

            //this is when we are at min last element then we need to sub smallest value from sum to have 3 element
            //if pq size equal to k
            if(pq.size()==k){
                max_ans = max(max_ans, 1LL*sum*min); //set max sum

                int x = pq.top(); // remove top element smallest element
                sum-=x; //sub min ele from sum
                pq.pop(); //pop element
            }
        }

        return max_ans;
    }
};