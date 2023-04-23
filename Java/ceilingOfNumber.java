//what is ceiling ? ceiling is smallest element in array, that is greater than or equal to target
// [2,4,6,7,8,9,11,15,16], target =11; here, ceiling=11.
// [1,4,5,8,9], target=6; here, ceiling=8 (remember, greater than or equal to target :) ).
//write code to do so.
public class ceilingOfNumber {
    static int ceiling(int arr[],int target){
        int s=0;
        int index=-1;
        int f=arr.length-1;
        while(s<=f){ //when while loop breaks, s=f+1; then , if no number is found, next biggest element will be arr[s]
            int mid=s+(f-s)/2;
            if(target == arr[mid]){
                index=arr[mid];
                break;
            }else if(target>arr[mid]){
                s=mid+1;
            }else if(target<arr[mid]){
                f=mid-1;
            }
        }
        if(index == -1){
            return arr[s];
        }else{
            return index;
        }
    }
    public static void main(String[] args) {
        int a[]={2,3,5,9,14,16,18};
        int target=8;
        System.out.println(ceiling(a,target));
    }
}