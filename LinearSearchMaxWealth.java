public class LinearSearchMaxWealth {
    //https://leetcode.com/problems/richest-customer-wealth/
    static int rowSum(int a[]){
        int rs=0;
        for(int i=0;i<a.length;i++){
            rs=rs+a[i];
        }
        return rs;
    }
    static int richestWealth(int a[][]){
        int no_of_customers=a.length;
        int max=rowSum(a[0]);
        for(int i=1;i<no_of_customers;i++){
            if(rowSum(a[i]) >= max){
                max=rowSum(a[i]);
            }
        }
        return max;
    }
    public static void main(String[] args) {
        int a[][]={{1,4,2},
                    {4,2,9,1},
                    {7,8}};
        System.out.println(richestWealth(a));
    }
    
}
