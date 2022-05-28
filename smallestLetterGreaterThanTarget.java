//https://leetcode.com/problems/find-smallest-letter-greater-than-target/
public class smallestLetterGreaterThanTarget {
    static char smallest(char arr[],char target){
        int s=0;
        int f=arr.length-1;
        while(s<=f){
            int mid=s+(f-s)/2;
            
            if(target<arr[mid]){
                f=mid-1;
            }else{
                s=mid+1;
            }
        }
        return arr[s % arr.length];
    }
    public static void main(String[] args) {
        char a[]={'c','f','j','x'};
        char target='d';
        System.out.println(smallest(a, target));
    }
}