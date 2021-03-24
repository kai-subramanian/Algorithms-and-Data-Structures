#include<iostream>
using namespace std;
int main(){
	int x[3][3],y[3][3],sum[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>x[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>y[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sum[i][j]=x[i][j]+y[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
