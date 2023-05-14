#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Graph{
 public:
    int v,e;
    vector<vector<int>>ans;
    Graph(int x){
        v=x;
        e=0;
        ans.resize(v);
    }
    void addEdge(int v,int w){
        ans[v].push_back(w);
        ans[w].push_back(v);
    }
    void DFS(int n){
        stack<int>s;
        vector<bool>vis(v,false);
        s.push(n);
        vis[n]=true;
        while(!s.empty()){
            int a=s.top();
            s.pop();
            cout<<a<<" ";
            for(int i=0;i<ans[a].size();i++){
                int v=ans[a][i];
                if(!vis[v]){
                    s.push(v);
                    vis[v]=true;
                }
            }
        }
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);

    g.DFS(1);
}