#include<iostream>
#include<vector>
#include<list>

using namespace std;


bool isPath(vector<vector<int>>n,int s,int d){
    list<int>q;
    vector<bool>vis;
    vis.resize(n.size(),false);
    if(s==d){
        return true;
    }
    q.push_back(s);
    vis[s]=true;
    while(!q.empty()){
        int x=q.front();
        q.pop_front();
        if(x==d){
            return true;
        }
        for(auto it:n[x]){
            if(it==d){
                return true;
            }
            if(!vis[it]){
                vis[it]=true;
                q.push_back(it);
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>>mat;
    mat.resize(5);
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

    cout<<isPath(mat,3,0)<<endl;
    cout<<isPath(mat,0,1)<<endl;
}