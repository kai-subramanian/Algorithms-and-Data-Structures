public class recursionFibo {
    public static void main(String[] args) {
        int n=10;
        System.out.println(fibo(n)); 
    }
    static int fibo(int x){
        if(x<2) return x;
        else  return fibo(x-1) + fibo(x-2);
    }
}
