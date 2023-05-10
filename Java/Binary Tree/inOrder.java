import java.util.*;
import java.util.Stack;
class Node {
	public Node left;
    public Node right;
    int data;

    Node(int data) {
        this.data = data;
    }
}

public class inOrder {
    List<Integer> getInorderTraversal(Node root) {
    	// add your logic here
		Stack<Node> stack = new Stack<>();
        ArrayList<Integer> al = new ArrayList<>();
        Node curr = root;
        while (!stack.isEmpty() || curr != null) {
            while (curr != null) {
                stack.push(curr);
                curr = curr.left;
            }
            Node node = stack.pop();
            al.add(node.data);
            curr = node.right;
        }
        return al;
	}
    public static void main(String args[]){
        Node root = new Node(50);
        root.left = new Node(10);
        root.right = new Node(20);
        root.left.left = new Node(30);
        root.left.left.right = new Node(40);
        root.left.right = new Node(60);
        root.right.left = new Node(70);
        root.right.right = new Node(80);
        root.right.left.left = new Node(90);
    }
}
