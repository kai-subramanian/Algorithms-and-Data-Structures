// Program to implement queue
#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int tail;
    int count;
 public:
    Queue(int s);
    void enqueue(int x);
    int dequeue();
    int peek();
};

Queue::Queue(int s){
    size=s;
    arr=new int[size];
    front=0;
    tail=-1;
    count=0;
}

void Queue::enqueue(int x){
    if(tail>=size-1){
        cout<<"OVERFLOW"<<endl;
        exit(EXIT_FAILURE);
    }
    tail=(tail+1)%size;
    arr[tail]=x;
    size++;
    count++;
}

int Queue::dequeue(){
    if(tail<0){
        cout<<"UNDERFLOW"<<endl;
    }

    int y=arr[front];
    front=(front+1)%size;
    size--;
    count--;
    return y;
}

int Queue::peek(){
    return arr[front];
}

int main(){
    Queue q(6);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    cout<<q.peek()<<endl;
    return 0;
}