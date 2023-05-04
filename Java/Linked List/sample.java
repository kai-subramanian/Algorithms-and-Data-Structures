public class sample {
    static int linSearch(int a[], int target){
        int ans=-1;
        for(int i:a){
            if(i == target){
                ans=i;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int matrix[][]={{1 ,2 ,3},
                        {4 ,5 ,6},
                        {7 ,8 ,9},
                        {10, 11, 12}};
        int arr[]=new int[matrix[0].length];
        for(int i=0;i<matrix.length;i++){
            // Add all elements
            int k=0;
            for(int j=0;j<matrix[0].length;j++){
                arr[k]=matrix[i][j];
                k++;
            }
            int f = linSearch(arr,8);
            if(f!=-1){
                System.out.println(f);
            }
        }
    }
}
