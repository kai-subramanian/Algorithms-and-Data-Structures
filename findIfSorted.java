public class findIfSorted {
    public static void main(String[] args) {
        int arr[]={3,4,5,16,7,8,9};
        System.out.println(isSorted(arr,0));
    }

    private static boolean isSorted(int[] a,int index) {
        if(index==a.length-1){return true;}
        return a[index]<a[index+1] && isSorted(a, index+1);
    }
}
