import java.util.*;
import java.util.Stack;
class Node {
	public Node left;
    public Node right;
    int data;

    Node(int data) {
        this.left=null;
        this.right=null;
        this.data = data;
    }
}

public class preOrder {
    static List<Integer> getPreorderTraversal(Node root) {
    	// add your logic here
		Stack<Node> stack = new Stack<>();
        ArrayList<Integer> al = new ArrayList<>();
        Node curr = root;

        while(true){
            if(curr!=null){
                al.add(curr.data);
                stack.push(curr);
                curr=curr.left;
            } else{
                if(stack.isEmpty()){
                    break;
                }
                curr=stack.pop();
                curr=curr.right;
            }
        }
        return al;
	}
    public static void main(String args[]){
        Node n1=new Node(1);
        Node n2=new Node(2);
        Node n3=new Node(3);
        Node n4=new Node(4);
        Node n5=new Node(5);
        Node n6=new Node(6);
        Node n7=new Node(7);

        n1.left=n2;
        n1.right=n7;

        n2.left=n3;
        n2.right=n4;

        n4.left=n5;
        n4.right=n6;

        List<Integer> answer=getPreorderTraversal(n1);
        System.out.println(answer);
    }
}
