import java.util.*;
class Vertex{
    int v;
    int e;
    ArrayList<ArrayList<Integer>>mat;
    Vertex(int n){
        this.v=n;
        this.e=0;
        this.mat=new ArrayList<ArrayList<Integer>>();
        for(int i=0;i<v;i++){
            mat.add(new ArrayList<Integer>());
        }
    }
    void addEdge(int u,int v){
        mat.get(u).add(v);
        mat.get(v).add(u);
        e=e+1;
    }
    void breadthFirstSearch(int source){
        boolean vis[]=new boolean[v];
        Queue<Integer>q=new LinkedList<Integer>();
        q.add(source);
        vis[source]=true;
        while(!q.isEmpty()){
            int node=q.poll();
            // System.out.print(node+" ");
            for(int x:mat.get(node)){
                // if the node was not previously visited,
                // explore its neighbours and push them to queue.
                if(vis[x]==false){
                    vis[x]=true;
                    q.add(x);
                }
            }
            System.out.println();
        }
    }
}
public class bfs {
    public static void main(String[] args) {
        Vertex g=new Vertex(5);
        g.addEdge(0, 1);
        g.addEdge(3, 2);
        g.addEdge(2, 4);
        g.addEdge(1, 4);
        g.addEdge(3, 1);
        g.addEdge(2, 0);
        g.breadthFirstSearch(0);
    }
}
