public class binarySearchIterative {
    static int binSearch(int[] arr, int target) {
        int start=0;
        int end=arr.length-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(target>arr[mid]){
                start=mid+1;
            }
            else if(target<arr[mid]){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[]={2,4,6,8,11,23,45,67,89,101};
        int target = 103;
        System.out.printf("Target %d found at index %d \n",target, binSearch(arr,target));  
    }   
}
