public class randomTrials {
    static int factorial(int x){
		int res=1;
		for(int i=1;i<=x;i++){
			res=res*i;
		}
		return res;
	}
    public static void main(String[] args) {
        // int val=0;
        // String s="ABCA";
        // for(int i=0;i<s.length();i++){
        //     val=val*26;
        //     val=val+s.charAt(i)-'A'+1;
        // }
        // System.out.println(val);
        int n=10;
        if(n==0){
			System.out.println(0);
		}
		int count=0;
		int y=factorial(n);
		String m=Integer.toString(y);
		for(int i=m.length()-1;i>=0;i--){
			if(m.charAt(i)=='0'){
				count++;
			}else{
				break;
			}
		}
		System.out.println(count);
    }
}
