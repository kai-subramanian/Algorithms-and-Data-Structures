// Program to find peak element in mountain array
#include<iostream>
using namespace std;

int peak(int a[],int s,int f){
    while(s<f){
        int m=s+(f-s)/2;
        if (a[m]<a[m+1]){
            s=m+1;
        }else{
            f=m;
        }
    }
    return f;
}

int main(){
    int arr[]={8,21,24,26,35,30,15,6};
    cout<<peak(arr,0,sizeof(arr)/sizeof(arr[0]))<<endl;
    return 0;
}