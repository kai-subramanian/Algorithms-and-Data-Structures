#include<vector>
#include<iostream>
class Graph{
 public:
    int v;
    int e;
    std::vector<std::vector<int>> adjList;
    Graph(int x){
        v=x;
        e=0;
        adjList.resize(v);
    }
    void addEdge(int u, int v){
        adjList[u].push_back(v);
        adjList[v].push_back(u);
        e++;
    }
    int k=0;
    void dispGraph(){
        while(k<v){
            for(auto it:adjList[k]){
                std::cout<<it<<" ";
            }
            std::cout<<std::endl;
            k++;
        }
    }

};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
    
    g.dispGraph();   
    
}