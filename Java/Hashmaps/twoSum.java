package Hashmaps;
import java.util.*;
public class twoSum {
    public static void main(String[] args) {
        HashMap<Integer,Integer>hm=new HashMap<>();
        int arr[]={2,7,11,15};
        int target=18;
        for(int i=0;i<arr.length;i++){
            int diff=target-arr[i];
            if(hm.containsKey(diff)){
                System.out.println(hm.get(diff)+" "+i);
            } else{
                hm.put(arr[i],i);
            }
        }
    }
}
