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

public class postOrder {
    static List<Integer> getPostorderTraversal(Node root) {
    	// add your logic here
		Stack<Node> stack = new Stack<>();
        ArrayList<Integer> al = new ArrayList<>();
        Node curr = root;
        // left right node
        if(curr!=null){
            stack.push(curr);
        } 
        while(!stack.isEmpty()){
            Node nx=stack.pop();
            if(nx.left!=null){
                stack.push(nx.left);
            }
            if(nx.right!=null){
                stack.push(nx.right);
            }
            al.add(nx.data);
        }
        Collections.reverse(al);
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
        Node n8=new Node(8);

        n1.left=n2;
        n1.right=n7;

        n7.left=n8;

        n2.left=n3;
        n3.right=n4;
        n4.right=n5;
        n5.right=n6;

        List<Integer> answer=getPostorderTraversal(n1);
        System.out.println(answer);
    }
}
