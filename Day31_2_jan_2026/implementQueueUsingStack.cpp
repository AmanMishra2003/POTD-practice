/*
https://leetcode.com/problems/implement-queue-using-stacks/
*/
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
         while(!s1.empty()){
            int n = s1.top();
            s2.push(n);
            s1.pop();
        }

        int ans= s2.top();
        s2.pop();
        
        while(!s2.empty()){
            int n = s2.top();
            s1.push(n);
            s2.pop();
        }

        return ans;
    }
    
    int peek() {
        if(s1.empty()){
            return -1;
        }

        while(!s1.empty()){
            int n = s1.top();
            s2.push(n);
            s1.pop();
        }

        int ans= s2.top();
        
        while(!s2.empty()){
            int n = s2.top();
            s1.push(n);
            s2.pop();
        }

        return ans;
    }
    
    bool empty() {
        if(s1.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */