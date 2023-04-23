//what is floor ? floor is the greatest number in a sorted array, that is lesser than or equal to the target.
//[2,4,6,7,8,9,11,15,16], target =11; so floor is 11
//[1,5,6,7,9,14,16], target =10; so floor is 9.
//[1,5,6,7,9,14,16], target =3; so floor is 1.
public class floorOfNumber {
    static int floor(int a[],int target){
        int s=0;
        int f=a.length-1;
        int index=-1;
        while(s<=f){
            int mid=s+(f-s)/2;
            if(target == a[mid]){
                index=a[mid];
                break;
            }else if(target>a[mid]){
                s=mid+1;
            }else if(target<a[mid]){
                f=mid-1;
            }
        }
        if(index==-1){
            return a[f];
        }else{
            return index;
        }
    }
    public static void main(String[] args) {
        int arr[]={2,4,7,8,9,11,15,18};
        int target=3;
        System.out.println(floor(arr,target));
    }
}