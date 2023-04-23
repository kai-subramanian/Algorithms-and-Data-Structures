//import java.util.Arrays;

public class largestAltitude {
    static int[] findRunSum(int a[]){
        int ans[]=new int[a.length+2];
        int j=0;
        for(int i=0;i<a.length;i++){
            int sum=j+a[i];
            ans[i]=sum;
            j=sum;
        }
        ans[a.length+1]=j;
        return ans;
    }
    static int findMax(int a[]){
        int max=a[0];
        for(int i=1;i<a.length;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        return max;
    }
    public static void main(String[] args){
        int gain[]={44,32,-9,52,23,-50,50,33,-84,47,-14,84,36,-62,37,81,-36,-85,-39,67,-63,64,-47,95,91,-40,65,67,92,-28,97,100,81};
        System.out.println(findMax(findRunSum(gain)));
    }  
}
