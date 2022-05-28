public class orderAgnosticBinarySearch {

    static int binSearch(int[] arr, int target) {

        int start=0;
        int end=arr.length-1;
        boolean isAsc=arr[start]<arr[end];
    
        while(start<=end){
            int mid = (start+end)/2;

            if(target ==  arr[mid]){
                return mid;
            }
            if(isAsc){
                if(target>arr[mid]){
                    start=mid+1;
                }
                else if(target<arr[mid]){
                    end=mid-1;
                }
            }
            else{
                if(target<arr[mid]){
                    start=mid+1;
                }
                else if(target>arr[mid]){
                    end=mid-1;
                }
            } 
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[]={101,89,76,65,43,32,11};
        int target = 89;
        System.out.printf("Target %d found at index %d \n",target, binSearch(arr,target));  
    }   
}
