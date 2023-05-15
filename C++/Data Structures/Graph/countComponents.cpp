#include<iostream>
#include<list>
#include<vector>


using namespace std;

vector<bool>vis;

bool DFS(vector<vector<int>>mat, int i, vector<bool>v){
    if(v[i]){
        return false;
    }
    v[i]=true;
    for(auto it:mat[i]){
        DFS(mat,it,v);
    }
    return true;
}

int connectedCounter(vector<vector<int>>mat){
    vis.resize(mat.size(),false);
    int c=0;
    for(int i=0;i<mat.size();i++){
        if(!vis[i]){
            c++;
            std::list<int> q;
            vis[i]=true;
            q.push_back(i);
            while(!q.empty()){
                i=q.front();
                q.pop_front();
                for(auto it:mat[i]){
                    if(!vis[it]){
                        vis[it]=true;
                        q.push_back(it);
                    }
                }
            }
        }
    }
    return c;   
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

    mat[5].push_back(6);
    mat[6].push_back(5);

    vector<bool>vis(mat.size(),false);

    cout<<connectedCounter(mat)<<endl;

}