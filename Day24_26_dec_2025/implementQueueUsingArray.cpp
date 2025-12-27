class myQueue {

  public:
    vector<int> arr;
    int n;
    
    myQueue(int n) {
        // Define Data Structures
        this->n = n;
    }

    bool isEmpty() {
        // check if the queue is empty
        if(arr.size()==0) return true;
        else false;
    }

    bool isFull() {
        // check if the queue is full
        if(arr.size()==n)return true;
        else false;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue.
        if(!isFull())arr.push_back(x);
    }

    void dequeue() {
        // Removes the front element of the queue.
        if(!isEmpty())arr.erase(arr.begin());
    }

    int getFront() {
        // Returns the front element of the queue.
        if(!isEmpty()) return arr[0];
        else return -1;
    }

    int getRear() {
        // Return the last element of queue
        if(!isEmpty()) return arr[arr.size()-1];
        else return -1;
    }
};