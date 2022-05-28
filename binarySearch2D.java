import java.util.Arrays;
public class binarySearch2D {
    static int[] search(int arr[][],int target){
        int r=arr.length;
        int c=arr[0].length;
        int left=0;
        int right=(r*c)-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            int midElement = arr[mid/c][mid%c]; //mathemagic ft. Nick White
            if(midElement == target){
                return new int[]{mid/c,mid%c};
            }
            else if (target>midElement){
                left=mid+1;
            }
            else if (target<midElement){
                right=mid-1;
            }
        }
        return new int[]{-1,-1};
    }
    public static void main(String[] args) {
        int m[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        System.out.println(Arrays.toString(search(m,10)));     
    }
}
