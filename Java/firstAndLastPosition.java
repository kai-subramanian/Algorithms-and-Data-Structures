//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
import java.util.Arrays;

public class firstAndLastPosition {
    static int[] firstAndLast(int arr[],int target){
        int ans[]={-1,-1};
        int start=search(arr,target,true);
        int end=search(arr,target,false);
        ans[0]=start;
        ans[1]=end;
        return ans;
    }
    static int search(int arr[], int target, boolean findStart){
        int ans=-1;
        int start=0;
        int end=arr.length-1;

        //check for first occurrence

        while(start<=end){
            int mid = (start+end)/2;
            if(target>arr[mid]){
                start=mid+1;
            }
            else if(target<arr[mid]){
                end=mid-1;
            }
            else{
                //potential answer found
                ans=mid;
                if(findStart==true){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int arr[]={5,5,7,7,7,7,8,8,10};
        int t=7;
        System.out.println(Arrays.toString(firstAndLast(arr,t)));
    }    
}
