public class SqaureRootRecursive{
    static int sqRoot(int s,int f,int target){
        if(s<=f){
            int m=(s+f)/2;
            if(m*m == target){
                return m;
            }
            else if(m*m > target){
                return sqRoot(s, m-1,target);
            }
            else if(m*m < target){
                return sqRoot(m+1, f,target);
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int n=6400;
        int res=sqRoot(1,n,n);
        System.out.println(res);
    }
}