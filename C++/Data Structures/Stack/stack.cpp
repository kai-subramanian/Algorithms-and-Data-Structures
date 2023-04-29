// Program to implement a stack from scratch
#include<iostream>
#include<cstdlib>
using namespace std;

class Stack{
    // We'll use an array.
    int size;
    int top;
    int *arr;
 public:
    Stack(int s);
    void push(int x);
    int pop();
    int peek();
};

Stack::Stack(int s){
    size=s;
    arr=new int[size];
    top=-1;
}
void Stack::push(int x){
    if(top>=size-1){
        cout<<"OVERFLOW"<<endl;
        exit(EXIT_FAILURE);
    }
    arr[++top]=x;
}

int Stack::pop(){
    if(top<0){
        cout<<"UNDERFLOW"<<endl;
        exit(EXIT_FAILURE);
    }
    return arr[top--];
}

int Stack::peek(){
    return arr[top];
}

int main(){
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}