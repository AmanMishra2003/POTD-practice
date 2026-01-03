//https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1?page=1&category=Heap&sortBy=submissions

//important
/*
This is frequently used in Competitive Programming. We first multiply all elements with (-1). Then we create a max heap (max heap is the default for priority queue). When we access the data and want to print it we simply multiply those elements with (-1) again
*/
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int> pq;
        
        for(int i:arr){
            pq.push(-1*i);
        }
        
        long long sum = 0;
        while(pq.size()!=1){
            int num1 = pq.top(); pq.pop();
            int num2 = pq.top(); pq.pop();
            pq.push(num1+num2);
            sum+=(-(num1+num2));
        }
        
        
        return sum;
    }
};