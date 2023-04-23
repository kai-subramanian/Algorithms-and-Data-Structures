import java.util.Arrays;

public class bubbleSort {
    static int[] bubs(int a[]){
        int temp=0;
        for(int i=0;i<a.length;i++){
            for(int j=i+1;j<a.length;j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        return a;
    }
    public static void main(String[] args) {
        int arr[]={3,3,3,3,3,3,3,33,3,3,55};
        System.out.println(Arrays.toString(bubs(arr)));
    }    
}
