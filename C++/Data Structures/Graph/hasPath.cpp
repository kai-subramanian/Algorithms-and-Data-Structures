// Program to check if all nodes are connected (i.e) whether some path exists or not
#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
 public:
    int v,e;
    vector<vector<int>>mat;
    Graph(int x){
        v=x;
        e=0;
        mat.resize(v);
    }
    void addEdge(int u,int v){
        mat[u].push_back(v);
        mat[v].push_back(u);
        e++;
    }
    bool findpath(){
        list<int>q;
        vector<bool>vis;
        vis.resize(v,false);
        q.push_back(0);
        vis[0]=true;
        while(!q.empty()){
            int x=q.front();
            cout<<x<<" ";
            q.pop_front();
            for(auto it:mat[x]){
                if(!vis[it]){
                    vis[it]=true;
                    q.push_back(it);
                }
            }
        }
        bool hasPath=true;
        for(auto it=vis.begin();it!=vis.end();it++){
            if(*it==false){
                hasPath=false;
                break;
            }
        }
        cout<<endl;
        return hasPath;
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
    
    cout<<g.findpath()<<endl;   
    
}   