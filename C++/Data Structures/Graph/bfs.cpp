#include<iostream>
#include<list>
#include<vector>
class Graph{
 public:
    int v;
    int e;
    std::vector<std::vector<int>> mat;
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
    void BFS(int s){
        std::list<int> q;
        std::vector<bool> vis;
        vis.resize(v,false);
        vis[s]=true;
        q.push_back(s);
        while(!q.empty()){
            s=q.front();
            std::cout<<s<<" ";
            q.pop_front();

            for(auto it:mat[s]){
                if(!vis[it]){
                    vis[it]=true;
                    q.push_back(it);
                }
            }
        }

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
    
    g.BFS(1);   
    
}