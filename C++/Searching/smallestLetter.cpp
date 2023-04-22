// Program to print smallest letter in the array
// which is greater than or equal to the target letter
// Basically a character implementation of ceiling of array

#include<iostream>
using namespace std;

char letterSearch(char arr[],char t,int s, int f){
    int len=f;
    while(s<=f){
        int m = s+(f-s)/2;
        if (arr[m]==t) {
            return arr[m];
        }
        if (arr[m]<t){
            s=m+1;
        }
        else {
            f=m-1;
        }
    }
    return arr[s%len];
}

int main(){
    char arr[]={'a','d','e','j','w','y'};
    char target='e';
    char res = letterSearch(arr,target,0,sizeof(arr)/sizeof(arr[0]));
    cout<<res<<endl;
    return 0;
}