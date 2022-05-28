public class LinearSearchRange {
    public static void main(String[] args) {
        int arr[]={2,4,6,8,10,12,14,16,18,20};
        int start=4;
        int end=8;
        int target = 2;
        System.out.println(findNum(arr,start,end,target));
    }

    private static boolean findNum(int[] arr, int start, int end,int target) {
        boolean isPresent = false;
        for(int i=start;i<=end;i++){
            if(arr[i] == target){
                isPresent = true;
                break;
            }
        }
        return isPresent;
    }
}   
