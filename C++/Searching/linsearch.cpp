#include<iostream>
using namespace std;
int main(){
    int a[]={1,5,2,3,7,6,4,8,16,9,0};
    int found=0;
    int target=16;
    for(int i=0;i<int(sizeof(a));i++){
        if(a[i]==target){
            found=1;
            cout<<"Found at index "<<i<<endl;
            break;
        }
    }
    if(found==0){
        cout<<"Not found"<<endl;
    }

}