public class LinearSearchMinimum {
    public static void main(String[] args) {
        int arr[]={5,3,7,4,1,8,0,6,8,9,10,-99};
        System.out.println(findMin(arr));
    }
    static int findMin(int a[]){
        int min=a[0];
        for(int i=0;i<a.length;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
        return min;
    }
}
