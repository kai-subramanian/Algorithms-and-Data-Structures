// Program to find ceiling of a number in an array
#include<iostream>
using namespace std;

int ceil(int arr[],int n,int s,int f){
    while(s<=f){
        int m = s+(f-s)/2;
        if (arr[m]==n){
            return m;    
        }    
        if (arr[m]<n){
            s=m+1;
        }
        else {
            f=m-1;
        }
    }
    return s;
}

int main(){
    int arr[]={1,3,5,7,9,11,13,15,17,19};
    int target=14;
    int res = ceil(arr,target,0,sizeof(arr)/sizeof(arr[0]));
    cout<<res<<endl;
    return 0;
}