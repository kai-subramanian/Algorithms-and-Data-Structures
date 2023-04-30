// Leetcode 1 - Two Sum
#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    unordered_map<int,int>m;
    int arr[]={2,7,11,15};
    int t=22;
    int ans[2];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(m.find(t-arr[i])!=m.end()){
            ans[0]=i;
            ans[1]=m[t-arr[i]];
        }
        m[arr[i]]=i;
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}