#include<iostream>
#include<vector>
#include<list>

using namespace std;
int findLargestComponent(vector<vector<int>>graph){
    vector<bool>vis(graph.size(),false);
    vector<int>cArr;
    int s=0;
    for(int i=0;i<graph.size();i++){
        if(!vis[i]){
            list<int>q;
            q.push_back(i);
            vis[i]=true;
            s=0;
            while(!q.empty()){
                i=q.front();
                s++;
                q.pop_front();
                for(auto it:graph[i]){
                    if(!vis[it]){
                        vis[it]=true;
                        q.push_back(it);
                    }
                }
            }
            cArr.push_back(s);
        }
    }
    int max=cArr[0];
    for(auto it:cArr){
        if(it>max){
            max=it;
        }
    }
    return max;
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

    mat[1].push_back(8);
    mat[8].push_back(1);

    mat[7].push_back(8);
    mat[8].push_back(7);

    cout<<findLargestComponent(mat)<<endl;

}
