#include<iostream>
using namespace std;

int fib(int n){
    int dp[999];
    if (n<=1) {
        return n;
    }
    if (dp[n]!=0){
        return dp[n];
    }
    else {
        dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
}   

int main(){
    int x=10;
    cout<<fib(x)<<" ";
    
}