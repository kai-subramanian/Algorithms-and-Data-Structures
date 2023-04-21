// Program to perform binary search
#include<iostream>
using namespace std;

int binary_search(int a[],int x,int s,int f){
    while(s<=f){
        int m = s+(f-s)/2;
        if(a[m]==x){
            return m;
        }
        if(a[m]<x){
            s=m+1;
        }
        else {
            f=m-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,7,9,11,13,15,17,19};
    int target=100;
    int res = binary_search(arr,target,0,sizeof(arr)/sizeof(arr[0]));
    if(res!=-1)
        cout<<"Found at index "<<res<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}