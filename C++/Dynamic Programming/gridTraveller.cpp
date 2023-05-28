// given an r*c grid, find number of ways to travel 
// from top left to bottom right. Given, you can 
// only move down or right

#include<iostream>
#include<cstring>
using namespace std;

int traveller(int r,int c){
    int dp[r][c];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1; 
    for(int x=0;x<r;x++){
        for(int y=0;y<c;y++){
            if(x+1<r){
                dp[x+1][y]+=dp[x][y];
            }
            if(y+1<c){
                dp[x][y+1]+=dp[x][y];
            }
        }
    }
    return dp[r-1][c-1];
}

int main(){
    int r=5;
    int c=5;
    int mem[r][c];
    cout<<traveller(r,c)<<endl;
}
    

