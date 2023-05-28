#include<iostream>
using namespace std;

template <class T>
T add(T x, T y){
    return x+y;
}

int main(){
    int ans=add(1,2);
    double a=add(1,static_cast<int>(2.3));
    
    cout<<ans<<endl;
    cout<<a<<endl;
    
}