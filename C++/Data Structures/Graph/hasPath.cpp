// Program to check if all nodes are connected (i.e) whether some path exists or not
#include<iostream>
#include<vector>
#include<list>
using namespace std;

bool isPath(vector<vector<int>>n,int s,int d){
    list<int>q;
    q.push_back(s);
    
    while(!q.empty()){
        int x=q.front();
        q.pop_front();
        if(x==d){
            return true;
        }
        for(auto it:n[x]){
            q.push_back(it);
        }
    }
    return false;
}
int main(){

    int v=5,e=0;
    vector<vector<int>>mat;
    mat.resize(v);
    mat[0].push_back(2);e++;
    mat[1].push_back(2);e++;
    mat[3].push_back(2);e++;
    mat[3].push_back(4);e++;
    mat[4].push_back(0);e++;

    cout<<isPath(mat,3,0)<<endl;
    cout<<isPath(mat,4,0)<<endl;
    
}   