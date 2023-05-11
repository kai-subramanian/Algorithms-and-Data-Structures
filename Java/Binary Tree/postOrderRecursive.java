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

public class postOrderRecursive {
    static void getPostorderTraversal(Node root) {
    	if(root==null){
            return;
        }
        getPostorderTraversal(root.left);
        getPostorderTraversal(root.right);
        System.out.println(root.data);
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

        getPostorderTraversal(n1);
    }
    
}
