import java.util.*;

class Vertex{
    int v;
    int e;
    ArrayList<ArrayList<Integer>> g;
    Vertex(int n){
        this.v=n;
        this.e=0;
        g=new ArrayList<ArrayList<Integer>>();
        for(int i=0;i<v;i++){
            g.add(new ArrayList<Integer>());
        }
    }
    void addEdge(int u,int v){
        g.get(u).add(v);
        g.get(v).add(u);
        e+=1;
    }
    void printGraph(){
        System.out.print(g);
    }
}   
public class adjList {    
    public static void main(String[] args) {
        Vertex g=new Vertex(5);
        g.addEdge(1, 2);
        g.addEdge(1, 3);
        g.addEdge(2, 4);
        g.addEdge(3, 4);
        g.addEdge(2, 3);
        g.printGraph();
    }
}
