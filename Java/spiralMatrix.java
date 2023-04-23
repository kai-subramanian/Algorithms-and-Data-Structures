import java.util.*;
public class spiralMatrix {
    public static void main(String[] args) {
        int mat[][]={{1,2,3},
                {4,5,6},
                {7,8,9}};

        List<Integer> ans=new ArrayList<Integer>();
        
        int m=mat.length;
        int n=mat[0].length;
        System.out.println(m+" "+n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans.add(mat[i][j%n]);
            }
        }
        
        System.out.println(ans);
    }    
}
