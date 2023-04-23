public class LargestNegativeIntegerItera{
    static int negativeSearch(int a[],int s,int f){
        int index=0;
        while(s<=f){
            int m=(s+f)/2;
            if(a[m]<=0 && a[m+1]>=0){
                index=m;
                break;
            }
            else if(a[m]<=0 && a[m+1]<=0){
                s=m+1;
            }
            else if(a[m]>=0 && a[m+1]>=0){
                f=m-1;
            }
        }
        return index;
    }
    public static void main(String[] args) {
        int arr[]={-11,-9,-7,-4,-3,-2,0,0,5,7,8,9};
        int res=negativeSearch(arr,0,arr.length-1);
        System.out.println("Index "+res);
        System.out.println("Value "+arr[res]);
        System.out.println("Number of negative elements in array "+(res+1));
    }
}