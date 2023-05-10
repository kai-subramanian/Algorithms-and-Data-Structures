package Hashmaps;
import java.util.*;
public class findMissing {
    public static List<Integer> missingNumbers(int[] numArr) {
        List<Integer>arr=new ArrayList<Integer>();
        int s=0;
        int f=1;
        while(f<numArr.length){
          int diff=numArr[f]-numArr[s];
          System.out.println(diff);
          if(diff!=1){
            for(int i=numArr[s]+1;i<numArr[f];i++){
              arr.add(i);
            }
          }
          s++;
          f++;
        }
        return arr;
    }
    public static void main(String[] args) {
        int a[]={1,2,3,7,8,9,12,13};
        System.out.println(missingNumbers(a));
    }
}
