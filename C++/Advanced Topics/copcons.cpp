#include<iostream>
using namespace std;

class ABC{
 public:
    int *x;
    ABC(){
        x=new int(10);
    }
    ABC(ABC &a){
        x=new int(*(a.x));
    }
};

int main(){
    ABC a;
    ABC b=a;

    cout<<*(b.x)<<endl;
}