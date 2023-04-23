public class LinearSearchEvenDigitNumbers {
    //https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
    
    static boolean isEven(int n){
        int no_of_digits = (int) Math.log10(n)+1; //this is sheer mathematical magic. its mathemagic:)
        boolean even=false;
        if(no_of_digits % 2 == 0){
            even=true;
        }else{
            even=false;
        }
        return even;
    }
    static int findNoOfEvenDigits(int a[]){
        int majorCount=0;
        for(int i=0;i<a.length;i++){
            if(isEven(a[i])){
                majorCount++;
            }
        }
        return majorCount;
    }
    public static void main(String[] args) {
        int arr[]={12,532,1,3,5,2345,86,74,8,6,64,75,96,70};
        System.out.println(findNoOfEvenDigits(arr));
    }
}
