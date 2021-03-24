#include<iostream>
using namespace std;

struct student{
	int mark1;
	int mark2;
	char name[50];
};

int main(){
	student s; 
	cout<<"Enter mark1,mark2,name";
	cin>>s.mark1;
	cin>>s.mark2;
	cin>>s.name;
	cout<<"Name "<<s.name<<endl;
	cout<<"Mark1 "<<s.mark1<<endl;
	cout<<"Mark2 "<<s.mark2<<endl;
	return 0;
}
