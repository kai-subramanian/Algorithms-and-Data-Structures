import java.util.ArrayList;

public class recursiveLinearMultiple {
    public static void main(String[] args) {
        int arr[]={3,5,4,4,4,16,7,8,2,4,4,9};
        int target=4;
        System.out.println(findElement2(arr, target, 0));
    }
    //done by taking in list as parameter
    static ArrayList<Integer> findElement(int a[],int t,int index,ArrayList<Integer> ans){
        if(index==a.length) return ans;
        if(a[index]==t){
            ans.add(index);
        }
        return findElement(a, t, index+1,ans);
    }
    //sheer genius. done without taking list as parameter.
    static ArrayList<Integer> findElement2(int a[],int t,int index){
        ArrayList<Integer> ans=new ArrayList<>();
        if(index==a.length) return ans;
        if(a[index]==t){
            ans.add(index);
        }
        ArrayList<Integer> tempAns=findElement2(a, t, index+1);
        ans.addAll(tempAns);
        return ans;
    }
}
