public class Fibo{
    //find nth fibonacci number in O(1) time :)
    static int fiboFormula(int n){
        return (int) ((Math.pow(((1+Math.sqrt(5))/2),n)- Math.pow(((1-Math.sqrt(5))/2),n))/Math.sqrt(5));
    }
    public static void main(String[] args) {
        int n=30;
        for(int i=0;i<=n;i++){
            System.out.println(fiboFormula(i));
        }
        
    }
}