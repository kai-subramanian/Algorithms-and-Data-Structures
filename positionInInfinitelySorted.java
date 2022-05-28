//https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/
//import java.util.Arrays;
public class positionInInfinitelySorted {
    public static void main(String[] args) {
        int arr[]={3,5,7,9,10,90,
            100,130,140,160};
        int target=10;
        System.out.println(findRange(arr,target));
    }

    static int findRange(int[] arr,int target){
        //box of size 2
        int start=0;
        int end=1;
        
        //condition for target to lie in range
        //start<target<end
        //keep doubling till target>end
        //when target!>end, it lies behind end

        while(target > arr[end%(end*2)]){
            int newStart=end+1;
            //new end= old end+double the size of box
            end = end + (end-start+1) * 2;
            start=newStart;
        }
        return binSearch(arr, target, start, end);
    }

    static int binSearch(int[] arr, int target,int start,int end) {
        while(start<=end){
            int mid = (start+(end-start))/2;
            if(target<arr[mid]){
                end=mid-1;
            }
            else if(target>arr[mid]){
                start=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
}
