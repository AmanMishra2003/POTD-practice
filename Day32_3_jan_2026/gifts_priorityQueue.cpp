//https://leetcode.com/problems/take-gifts-from-the-richest-pile/?envType=problem-list-v2&envId=heap-priority-queue

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
      priority_queue<int> pq(gifts.begin(), gifts.end()); // O(n)

        for(int i=1;i<=k;i++){
            int max = pq.top();
            pq.pop();
            pq.push(floor(sqrt(max)));

        }

        
        long long sum = 0;
       while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
       }

        return sum;
    }
};