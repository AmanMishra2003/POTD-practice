/*
https://leetcode.com/problems/min-stack/
*/

class MinStack {
    stack<int> st;
    deque<int> min_stack;//storing sequence of minimum elements
public:
    MinStack() {
    }
    
    void push(int val) {

        //checking if current value is smaller or larger then last value in min_stack
        if(!min_stack.empty() && val<=min_stack.back()){
            min_stack.push_back(val); //if smaller push from back
        }else{
            min_stack.push_front(val); //if larger push from front
        }
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
            int x = st.top(); //taking top value in stack which will get popped

            //checking if the currently getting popped value is the smallest value or not
            if(x == min_stack.back()){
                min_stack.pop_back(); // if yes popped last value from the min_stack to point to next smaller value
            }

            st.pop(); //pop out the value
        } 
    }
    
    int top() {

        if(!st.empty()){
           return st.top(); //return the value at the top of the stack
        } 
        return -1;
    }
    
    int getMin() {

        if(!st.empty()){
           return min_stack.back();//returning the minimum value in the stack
        } 
        return -1;
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */