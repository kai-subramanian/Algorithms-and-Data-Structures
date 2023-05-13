#include<iostream>
#include<vector>
#include<list>
class Graph{
 public:
    int v;
    int e;
    std::vector<std::vector<int>> mat;
    Graph(int n){
        v=n;
        e=0;
        mat.resize(v);
    }
    void addEdge(int v,int w){
        mat[v].push_back(w);
        mat[w].push_back(v);
    }
    int find(int x){
        int level=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==x){
                    level=i;
                    break;
                }
            }
            if(level!=0){
                break;
            }
        }
        return level;
    }
    int k=0;
    void dispGraph(){
        while(k<v){
            for(auto it:mat[k]){
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
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,0);
    
    g.dispGraph();
    std::cout<<std::endl;
    std::cout<<g.find(1)<<std::endl;
    
}   