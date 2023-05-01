// Program to demonstrate bubble sort
// TC - O(n^2), inefficient algo.
#include<iostream>
using namespace std;

void bubs(int arr[], int len){
    int temp=0;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){
    int a[]={7,2,9,15,11,6,3,1};
    int len=sizeof(a)/sizeof(a[0]);
    bubs(a,len);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}