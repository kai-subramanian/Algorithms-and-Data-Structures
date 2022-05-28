public class peakIndex {
    static int bitonic(int arr[]){
        //int index=0;
        int s=0;
        int f=arr.length-1;
        while(s<f){
            int mid=s+(f-s)/2;
            if(arr[mid]>arr[mid+1]){
                f=mid;
            }else{
                s=mid+1;
            }
        }
        return s;
    }
    public static void main(String[] args) {
        int a[]={1,2,1,3,5,6,4};
        System.out.println(bitonic(a));
    }
}
