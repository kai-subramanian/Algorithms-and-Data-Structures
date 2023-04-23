public class LinearSearchRecursive {
    static int index=0;
    static int linSearch(int a[],int target){
        if(index==a.length){
            return 0;
        }
        if(a[index] == target){
            return 1;
        }
        else{
            index++;
            return linSearch(a, target);
        }
    }
    public static void main(String[] args) {
        int a[]={1,2,3,4,5,6,7,8,9};
        int target=69;
        System.out.println(linSearch(a,target));
    }
}   
