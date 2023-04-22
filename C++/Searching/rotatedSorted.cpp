// Program to search in rotated sorted array
#include<iostream>
using namespace std;

int searchRotated(int arr[],int t, int s, int f){
    return -1;
}

int main(){
    int arr[]={9,11,13,15,17,19,1,3,5,7,};
    int target=14;
    int res = searchRotated(arr,target,0,sizeof(arr)/sizeof(arr[0]));
    cout<<res<<endl;
    return 0;
}