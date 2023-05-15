#include<iostream>
#include<vector>
#include<list>

using namespace std;


bool isPath(vector<vector<int>>n,int s,int d,vector<bool>vis){
    if(s==d){
        return true;
    }
    if(vis[s]){
        return false;
    }
    vis[s]=true;
    for(auto it:n[s]){
        if(isPath(n,it,d,vis)==true){
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>>mat;
    mat.resize(7);
    mat[0].push_back(2);
    mat[2].push_back(0);

    mat[1].push_back(2);
    mat[2].push_back(1);

    mat[0].push_back(4);
    mat[4].push_back(0);

    mat[3].push_back(4);
    mat[4].push_back(3);

    mat[3].push_back(2);
    mat[2].push_back(3);

    
    vector<bool>vis;
    vis.resize(mat.size(),false);

    cout<<isPath(mat,6,0,vis)<<endl;
    cout<<isPath(mat,0,1,vis)<<endl;
}