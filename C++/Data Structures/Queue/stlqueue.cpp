// Program to demonstrate queue
#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"Size before popping "<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<"Size after popping "<<q.size()<<endl;
    cout<<q.front()<<endl;
    return 0;
}