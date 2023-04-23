//find largest negative integer in a sorted array, consisting of a mix of positive and negative.
public class LargestNegativeInteger{
    static int negativeSearch(int a[], int s, int f){
        //int index=0;
        if(s<=f){
            int m=(s+f)/2;
            if(a[m]<0 && a[m+1]>=0){
                return m;
            }
            else if(a[m]>=0 && a[m+1]>0){
                return negativeSearch(a, s, m-1);
            }
            else if(a[m]<=0 && a[m+1]<0){
                return negativeSearch(a, m+1, f);
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[]={-11,-9,-7,-4,-3,-2,-1,5,7,8,9};
        int res=negativeSearch(arr,0,arr.length-1);
        System.out.println("Index "+res);
        System.out.println("Value "+arr[res]);
        System.out.println("Number of negative elements in array "+(res+1));
    }
}