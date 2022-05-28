class Stack{
    final int size=10;
    int arr[]=new int[size];
    int ptr=-1;
    
    void push(int x){
        if(ptr > (size-1)){
            System.out.println("Cannot push to a full stack");
        }
        else{
            ptr=ptr+1;
            arr[ptr]=x;
        }
    }

    void pop(){
        int popped=0;
        if(ptr<0){
            System.out.println("Cannot pop from an empty stack");
        }
        else{
            popped=arr[ptr];
            System.out.println("Popped element is "+popped);
            ptr=ptr-1;
        }
    }

    void peek(){
        if(ptr<0 || ptr>size-1){
            System.out.println("Cannot peek to empty stack or overflowing stack");
        }
        else{
            System.out.println("Peeked element is "+arr[ptr]);
        }

    }
}
public class CustomStack {
    public static void main(String[] args) {
        Stack stk=new Stack();
        stk.push(12);
        stk.push(24);
        stk.push(36);
        stk.push(48);
        stk.push(48);

        stk.peek();
        
        stk.pop();
        stk.pop();
        stk.pop();
        stk.pop();
        stk.pop();
        
        stk.pop();
        stk.pop();
        stk.pop();
        stk.pop();
        stk.pop();

        stk.peek();

        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
        stk.push(10);
    }
}
