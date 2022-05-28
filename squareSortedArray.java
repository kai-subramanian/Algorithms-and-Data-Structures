import java.util.Arrays;

//https://www.youtube.com/watch?v=4eWKHLSRHPY
class squareSortedArray{
    public static void main(String[] args) {
        int[] arr={-9,-8,-7,-4,4,7,8,9,13};
        int[] ans=new int[arr.length];
        int s=0;
        int f=arr.length-1;
        int index=arr.length-1;
        while(s<=f){
            if(Math.abs(arr[s])>Math.abs(arr[f])){
                ans[index]=arr[s]*arr[s];
                index--;
                s++;
            }
            else{
                ans[index]=arr[f]*arr[f];
                index--;
                f--;
            }
        }
        System.out.println(Arrays.toString(ans));
        
    }
}