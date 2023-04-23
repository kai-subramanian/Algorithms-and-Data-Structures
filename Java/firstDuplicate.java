import java.util.HashSet;
//https://www.youtube.com/watch?v=XSdr_O-XVRQ&list=PLU_sdQYzUj2mE8quVfDEGnupdS7XuU2YW&index=4
public class firstDuplicate {
    //bruteforce solution, O(n^2)
    /*static int dupes(int arr[]){
        int dupe=arr.length;
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if( (arr[i] == arr[j]) && j<dupe){
                    dupe=j;
                }
            }
        }
        if(dupe == arr.length) return -1;
        else return dupe;
    }*/
    //optimal, O(n)
    static int dupes(int arr[]){
        HashSet<Integer> seen= new HashSet<Integer>();
        //int count=0;
        for(int i=0;i<arr.length;i++){
            if(seen.contains(arr[i])){
                return arr[i];
            }
            else{
                seen.add(arr[i]);
                //count++;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int a[]={2,3,6,3,5,6,9};
        System.out.println(dupes(a));
        //System.out.println(a[dupes(a)]);
    }     
}
