import java.util.*;
public class kthLargest {
    public static int[] kLargest(int[] nums, int k) {
        int[] ans=new int[k];
        Arrays.sort(nums);
        for(int i=0;i<k;i++){
          ans[i]=nums[nums.length-1-i];
        }
        return ans;
    }
    public static void main(String[] args) {
        int arr[]={5, 16, 7, 9, -1, 4, 3, 11, 2};
        int x=3;
        int A[]=new int[x];
        A=kLargest(arr, x);
        for(int i:A){
            System.out.print(i+" ");
        }
    }
}
