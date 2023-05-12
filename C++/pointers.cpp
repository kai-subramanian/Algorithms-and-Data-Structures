// Understanding pointers for the 3412875146597814695th time
#include<iostream>
int main(){
    int var=10;
    int *pvar=&var;
    std::cout<<"Address of variable : "<<*(*(&pvar))<<std::endl;
    std::cout<<"Value stored in the address "<<*pvar<<std::endl;

    int a=10;
    int &ref=a;
    std::cout<<"Variable : "<<a<<std::endl;
    std::cout<<"Reference : "<<*(&ref)<<std::endl;
}