/** This is the ListNode class definition **/

class Node {
	int data;
	Node next;

	Node(int data) {
		this.data = data;
		this.next = null;
	}
}

class addAtKthPosition {
	static Node addElement (Node head, int k, Node newElement) {
	    // add your logic here
        if (k==1){
            newElement.next=head;
            return newElement;
        }
        Node currHead=head;
        Node prev=head;
        for(int i=0;i<k-1;i++){
            prev=currHead;
            currHead=currHead.next;
        }
        prev.next=newElement;
        newElement.next=currHead;
        return head;
	}
    public static void main(String[] args) {
        Node n1=new Node(5);
        Node n2=new Node(6);
        Node n3=new Node(7);
        Node n4=new Node(8);
        Node n5=new Node(9);
        Node n6=new Node(10);
        Node n7=new Node(11);
        Node n8=new Node(12);

        n1.next=n2;
        n2.next=n3;
        n3.next=n4;
        n4.next=n5;
        n5.next=n6;
        n6.next=n7;
        n7.next=n8;
        n8.next=null;

        Node addMe=new Node(99);

        Node head=n1;
        Node ans = addElement(head,1, addMe);
        while(ans!=null){
            System.out.print(ans.data+"->");
            ans=ans.next;
        }
    }
}
