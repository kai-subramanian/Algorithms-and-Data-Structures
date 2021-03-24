#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x;	//4
	cin>>y;	//5
	cout<<"X is "<<x;
	cout<<" and Y is "<<y;
	cout<<"After swap "<<endl;
	x=x+y;	//x=4+5=9
	y=x-y;	//y=9-5=4
	x=x-y;	//x=9-4=5
	cout<<"X is "<<x;
	cout<<" and Y is "<<y;
}
