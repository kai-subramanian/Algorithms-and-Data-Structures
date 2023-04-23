//use inbuilt stack, no need for constructing from scratch.
import java.util.Stack;
public class Infix2Postfix {
    static int priority(char c){
        if(c=='(')
            return 0;
        else if(c=='+' || c=='-')
            return 1;
        else if(c=='*' || c=='/')
            return 2;
        return -1;
    }
    public static void main(String[] args) {
        Stack<Character> stk = new Stack<Character>();
        String infix = "(A+B/C*(D+E)-F)";
        char x;
        for(int i=0;i<infix.length();i++){
            if(Character.isLetterOrDigit(infix.charAt(i))){
                System.out.printf("%c",infix.charAt(i));
            }
            else if(infix.charAt(i) == '('){
                stk.push(infix.charAt(i));
            }
            else if(infix.charAt(i) == ')'){
                while((x=stk.pop())!= '('){
                    System.out.printf("%c",x);
                }
            }
            else{
                while(priority(stk.peek())>= priority(infix.charAt(i))){
                    System.out.printf("%c",stk.pop());
                }
                stk.push(infix.charAt(i));
            }
        }
        while(!stk.isEmpty()){
            System.out.printf("%c",stk.pop());
        }
    }
}