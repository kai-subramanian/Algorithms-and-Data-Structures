// Program to demonstrate use of STL stack
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(11);
    s.push(21);
    s.push(31);
    s.push(41);
    s.push(51);

    s.pop();
    s.pop();
    s.pop();
    
    cout<<s.top()<<endl;


}