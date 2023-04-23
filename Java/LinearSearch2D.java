public class LinearSearch2D {
    private static boolean isPresent2D(int[][] a, int target) {
        boolean present = false;
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[0].length;j++){
                if(a[i][j] == target){
                    present=true;
                    break;
                }
            }
        }
        return present;
    }
    public static void main(String[] args) {
        int a[][]={{1,2,3},
                {11,5,6,9,10},
                {7,8,9,4}};
        int target=0;
        System.out.println(isPresent2D(a,target));
    }

    
}
