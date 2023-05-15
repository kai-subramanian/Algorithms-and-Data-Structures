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
        vector<bool>vis;
        vis.resize(ans.size(),false);
        vis[n]=true;
        s.push(n);
        while(!s.empty()){
            int a=s.top();
            cout<<a<<" ";
            s.pop();
            for(auto it:ans[a]){
                if(!vis[it]){
                    s.push(it);
                    vis[it]=true;
                }
            }
        }
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,4);
    g.addEdge(3,2);

    g.DFS(0);
}