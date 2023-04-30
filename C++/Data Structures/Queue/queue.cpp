// Program to implement a queue from scratch
#include<iostream>
using namespace std;

class Queue{
 public:
    int arr[10];
    int item;
    int front;
    int rear;
    Queue(){
        front=0;
        rear=0;
    }
    void enqueue(int x){
        if (rear==10){
            cout<<"OVERFLOW"<<endl;
        }
        else{
            arr[rear++]=x;
        }
    }
    void dequeue(){
        if (front==rear){
            cout<<"UNDERFLOW"<<endl;
        }
        else{
            front++;
        }
    }
    void peek(){
        if (front>=0){
            cout<<arr[front]<<endl;
        }
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.enqueue(110);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.dequeue();
    q.dequeue();

    q.peek();
    return 0;
}