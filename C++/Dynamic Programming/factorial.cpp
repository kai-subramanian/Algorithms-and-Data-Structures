#include<iostream>
using namespace std;

int f[999];

int fact(int y){
    if (y<=1){
        f[y]=1;
        return 1;
    }
    if (f[y]!=0){
        return f[y];
    }else {
        f[y]=y*fact(y-1);
        return f[y];
    }

}
int main(){
    int x=5;
    cout<<fact(x)<<endl;
    for(int i=0;i<x+1;i++){
        cout<<f[i]<<", ";
    }
}