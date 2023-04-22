// Program to find position of element
// in infinity sorted array
#include<iostream>
using namespace std;

int binary_search(int a[],int x,int s,int f){
    while(s<=f){
        int m = s+(f-s)/2;
        if(x<a[m]){
            f=m-1;
        } else if(x>a[m]){
            s=m+1;
        } else {
            return m;
        }
    }
    return -1;
}

int slidingWindow(int a[],int t,int s,int f){
    while (t>a[f]){
        int temp = f+1;
        f=f+(f-s+1)*2;
        s=temp;
    }
    return binary_search(a,t,s,f);
}

int main(){
    int arr[]={1,3,5,7,9,11,13,15,17,19};
    int target=21;
    int res = slidingWindow(arr,target,0,3);
    if(res!=-1)
        cout<<"Found at index "<<res<<endl;
    else
        cout<<"Not found"<<endl;
    return 0;
}