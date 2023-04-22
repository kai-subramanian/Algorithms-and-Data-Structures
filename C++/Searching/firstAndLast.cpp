// Given an integer array sorted in ascending order,
// find the starting and ending position of target value.
// If target not found, return [-1,-1]
// else, return [start, finish]
// For given example, expected o/p is [3,4]
// Expected time complexity - O(log n)

#include<iostream>
#include<vector>
using namespace std;

int firstLast(int a[],int x,int s,int f,bool startIndex){
    int ans=-1;
    while(s<=f){
        int m = s+(f-s)/2;
        if(x<a[m]){
            f=m-1;
        } else if(x>a[m]){
            s=m+1;
        } else {
            // one of the potential ans found
            ans=m;
            if(startIndex){
                f=m-1;
            } else{
                s=m+1;
            }
        }
    }
    return ans;
}

vector<int> returnRange(int a[],int t,int s,int f){
    vector<int> res;
    int x=firstLast(a,t,s,f,true);
    int y=firstLast(a,t,s,f,false);
    res.push_back(x);
    res.push_back(y);
    return res;
}

int main(){
    int arr[]={5,7,7,8,8,8,8,8,8,8,10};
    int target=11;
    vector<int> p = returnRange(arr,target,0,sizeof(arr)/sizeof(arr[0]));
    for(auto i:p){
        cout<<i<<" ";
    }
    return 0;
}