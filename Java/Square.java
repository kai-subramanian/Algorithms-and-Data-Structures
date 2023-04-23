public class Square{
    static int sqrtSearch(int s,int f){
        int root=0;
        int target=f;
        while(s<=f){
            int m = (s+f)/2;
            if(m*m == target){
                root=m;
                break;
            }
            else if(m*m > target){
                f=m-1;
            }
            else if(m*m < target){
                s=m+1;
            }
        }
        return root;
    }
    public static void main(String[] args) {
        int n=9801;
        System.out.println(sqrtSearch(1, n));
    }
}