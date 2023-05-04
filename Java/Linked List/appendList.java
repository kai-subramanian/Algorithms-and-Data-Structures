class Node {
	int data;
	Node next;

	Node(int data) {
		this.data = data;
		this.next = null;
	}
}

public class appendList {
    static void reverse(Node n){
        Node prev=null;
        Node curr=n;
        Node next=curr.next;
        while(curr!=null){
            curr.next=prev;
            prev=curr;
            curr=next;
            if(next!=null){
                next=next.next;
            }
        }
    }
    static boolean isPalindrome(Node list) {
	    // add your logic here
		// approach - find startpoint, midpoint and	check if all elements 
		// till there, are equal
		boolean ans=true;
		Node head=list;
		Node s=list;
		Node f=list;
		while(f.next!=null){
			s=s.next;
			f=f.next.next;
		}
        System.out.println(s.data);
        Node compHead=s;
		// now s has midpoint
        reverse(s);
		while(s.next!=null){
			if(s.data==head.data){
                System.out.println(head.data+" "+s.data);
				ans=true;
			} else{

            }
            s=s.next;
		}
		return ans;
	}
    public static void main(String[] args) {
        Node n1=new Node(5);
        Node n2=new Node(6);
        Node n3=new Node(6);
        Node n4=new Node(7);
        Node n5=new Node(6);
        Node n6=new Node(6);
        Node n7=new Node(5);

        n1.next=n2;
        n2.next=n3;
        n3.next=n4;
        n4.next=n5;

        n5.next=n6;
        n6.next=n7;
        n7.next=null;

        boolean ans = isPalindrome(n1);
        System.out.println(ans);
    }
}
