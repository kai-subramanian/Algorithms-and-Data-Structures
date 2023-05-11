package Graphs;
import java.util.*;
class Vertex{
    int v;
    int e;
    int mat[][];
    public Vertex(int n){
        this.v=n;
        this.e=0;
        this.mat=new int[n][n];
    }
    public void addEdge(int u,int v){
        mat[u][v]=1;
        mat[v][u]=1;
        e+=1;
    }
    
}
public class graph {
    static void printGraph(int num[][]){
        for(int i=1;i<=num.length;i++){
            System.out.print(" "+i+"");
        }
        System.out.println();
        for(int i=0;i<num.length;i++){
            System.out.print(i+1+" ");
            for(int j=0;j<num.length;j++){
                System.out.print(num[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Vertex g=new Vertex(5);
        g.addEdge(1, 2);
        g.addEdge(1, 3);
        g.addEdge(2, 4);
        g.addEdge(3, 4);
        g.addEdge(2, 3);
        printGraph(g.mat);
    }    
}
