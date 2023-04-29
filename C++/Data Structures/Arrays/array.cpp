// Program to demonstrate an array
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};

    // Access elements by index; note that indexing starts from 0.
    cout<<arr[2]<<endl; 

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Can also rewrite elements based on index
    arr[4]=99;
    arr[5]=100;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}