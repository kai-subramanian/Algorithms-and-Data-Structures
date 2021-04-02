#include<iostream>
using namespace std;
int main(){
	int num=5;
	int *ptr;
	ptr=&num;
	cout<<"Number "<<num<<endl;
	cout<<"Pointer "<<*ptr<<endl;
	cout<<"Pointer address "<<ptr<<endl;
	cout<<"Number address "<<&num<<endl;
}
