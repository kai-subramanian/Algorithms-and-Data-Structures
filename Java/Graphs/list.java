package Graphs;
import java.util.*;
public class list {
    
    public static void main(String[] args) {
        int n=5;
        int m=6;
        ArrayList<Integer>adj=new ArrayList<>(n);
        for(int i=0;i<n;i++){
            adj.add(0);
        }
        Scanner s=new Scanner(System.in);
        for(int i=0;i<m;i++){
            System.out.println("Iter : "+i);
            int u=s.nextInt();
            int v=s.nextInt();
            adj.add(u,v);
            adj.add(v,u);
        }
        for(int i=0;i<adj.size();i++){
            System.out.println(i%n+" "+adj.get(i));
        }
    }
}
