#include<iostream>
#include<list>
#include<vector>

using namespace std;
vector<bool>vis;
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
    mat.resize(9);
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

    mat[7].push_back(8);
    mat[8].push_back(7);

    vector<bool>vis(mat.size(),false);

    cout<<connectedCounter(mat)<<endl;

}