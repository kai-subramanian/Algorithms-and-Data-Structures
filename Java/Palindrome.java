public class Palindrome {
    public static void main(String[] args) {
        String str="malayalamaa";
        int s=0;
        int f=str.length()-1;
        int flag=0;
        while(s<=f){
            if(str.charAt(s) == str.charAt(f)){
                flag=0;
            }
            else{
                flag=1;
                break;
            }
            s++;
            f--;
        }
        if(flag==0){
            System.out.println("Palindrome");
        }
        else{
            System.out.println("Non-palindrome");
        }

    }    
}
