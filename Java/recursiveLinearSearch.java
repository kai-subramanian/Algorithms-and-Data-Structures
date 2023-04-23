public class recursiveLinearSearch {
    public static void main(String[] args) {
        int arr[]={3,4,5,16,7,8,9};
        int target=3;
        System.out.println(findElement(arr,target,0));
    }
    static int findElement(int a[],int t,int index){
        if(a[index]==t){return index;}
        return findElement(a, t, index+1);
    }
}
