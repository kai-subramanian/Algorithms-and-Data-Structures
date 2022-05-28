import java.util.Arrays;

public class binarySearch2DElegant {
    public static void main(String[] args) {
        int a[][]={{1,2,3},
                {4,5,6},
                {7,8,9}};        
        int target=17;
        System.out.println(Arrays.toString(searchMatrix(a, target)));
    }

    private static int[] searchMatrix(int[][] a, int t) {
        int index[]={-1,-1};
        int i=0;
        int j=a[0].length-1;//no of columns in first row
        while(i<a.length && j>=0){    //i is no of rows and j is no of columns
            if(t == a[i][j]){
                index[0] =  i;
                index[1] = j;
                return index;
            }else if(t > a[i][j]){
                i++;
            }else if(t < a[i][j]){
                j--;
            }
        }
        return index;
    }
}
