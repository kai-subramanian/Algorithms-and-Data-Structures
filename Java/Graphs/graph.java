package Graphs;
import java.util.*;
public class graph {
    public static void main(String[] args) {
        int n=5;
        int m=6;
        int g[][]=new int[n+1][m+1];
        Scanner s=new Scanner(System.in);
        for(int i=0;i<m;i++){
            int u=s.nextInt();
            int v=s.nextInt();
            g[u][v]=1;
            g[v][u]=1;
        }
    }    
}
