#include<iostream>
using namespace std;

int main(){
    int *x;
    // create some space for 3 integers
    x=(int*)malloc(3*sizeof(int));
    cout<<x<<endl;
    cout<<x+1<<endl;
    cout<<x+2<<endl;

    free(x);
}
    

