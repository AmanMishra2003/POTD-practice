//https://leetcode.com/problems/kth-largest-element-in-a-stream/

//in this quesito intuition is to store on k element in the heap whenever our heap goes beyond k element we pop and return top element
class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;//min-heap
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i:nums){
            add(i);
        }
    }
    
    int add(int val) {
        pq.push(val);

        if(pq.size()>k) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */