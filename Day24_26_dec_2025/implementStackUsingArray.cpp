class myStack {
  public:
    vector<int> arr;
    int n;
    myStack(int n) {
        // Define Data Structures
        this->n = n;
    }

    bool isEmpty() {
        // check if the stack is empty
        if(arr.size()==0)return true;
        else return false;
    }

    bool isFull() {
        // check if the stack is full
        if(arr.size()==n){
            return true;
        }else{
            return false;
        }
    }

    void push(int x) {
        // inserts x at the top of the stack
        if(!isFull())arr.push_back(x);
    }

    void pop() {
        // removes an element from the top of the stack
        if(!isEmpty()) arr.pop_back();
    }

    int peek() {
        // Returns the top element of the stack
        if(!isEmpty())return arr[arr.size()-1];
        else return -1;
        
    }
};