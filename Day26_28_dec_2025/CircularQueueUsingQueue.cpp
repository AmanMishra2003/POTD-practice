class MyCircularQueue {
public:
    vector<int> q;
    int k;
    int front;
    int rear;

    MyCircularQueue(int k) {
        q.resize(k);
        this->k=k;
        front = -1;
        rear = -1;
    }
    
    //done by rear
    bool enQueue(int value) {
        if(!isFull()){
            if(front==-1){
                front=0;
            }
            rear=(rear+1)%k;
            q[rear] = value;
            return true;
        }
        return false;
    }
    
    //front do dequeue
    bool deQueue() {
        if(!isEmpty()){
            if(front==rear){
                front=-1;
                rear=-1;
            }else{
                front= (front+1)%k;
            }
            return true;
        }
        return false;
    }
    
    int Front() {
        if(!isEmpty()){
            return q[front];
        }
        return -1;
    }
    
    int Rear() {
        if(!isEmpty()){
            return q[rear];
        }
        return -1;
    }
    
    bool isEmpty() {
       return front==-1;
    }
    
    bool isFull() {
        if((front==-1 && rear==k-1) || front==(rear+1)%k) return true;
        return false;
    }
};