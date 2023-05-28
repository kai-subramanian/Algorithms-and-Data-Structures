#include<iostream>
using namespace std;

template <typename T>
T findMax(T a, T b){
    if(a>b){
        return a;
    } else{
        return b;
    }
}

int main(){
    cout<<findMax<int>(1,4)<<endl;
    cout<<findMax<int>(5,5)<<endl;

    cout<<findMax<float>(5.4,4.5)<<endl;

    cout<<findMax<char>('x','h')<<endl;
}
    