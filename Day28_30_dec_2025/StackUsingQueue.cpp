/*
https://www.geeksforgeeks.org/problems/stack-using-two-queues/1
*/

class myStack {
    queue<int> q;
    queue<int> temp;
    
  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        while(!q.empty()){
            temp.push(q.front());
            q.pop();
        }
        q.push(x);
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        
    }

    void pop() {
        // Removes an element from the top of the stack
      if(!q.empty()) q.pop();
       
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(q.empty())return -1;
        return q.front();
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};
