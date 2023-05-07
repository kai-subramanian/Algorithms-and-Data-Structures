/** This is the ListNode class definition **/

class ListNode {
	int data;
	ListNode next;

	ListNode(int data) {
		this.data = data;
		this.next = null;
	}
}

class addOneToList {
	static ListNode reverse(ListNode head){
		ListNode prev=null;
		ListNode curr=head;
		ListNode next=curr.next;
		while(curr!=null){
			curr.next=prev;
			prev=curr;
			curr=next;
			if(next!=null){
				next=next.next;
			}
		}
		return prev;
	}
    public static void main(String[] args) {
        ListNode n1=new ListNode(9);
        ListNode n2=new ListNode(9);
        ListNode n3=new ListNode(9);
        ListNode n4=new ListNode(9);
        ListNode n5=new ListNode(9);
        
        n1.next=n2;
        n2.next=n3;
        n3.next=n4;
        n4.next=n5;
        n5.next=null;

        ListNode oldhead=n1;
        int number=0;
		while(oldhead!=null){
			number=number+(oldhead.data);
            if(oldhead.next!=null){
                number=number*10;
            }
            oldhead=oldhead.next;
		}
        
        System.out.println(number);
        // now number essentially has the data to add 1 to. 
		// Some mathemagic and we're done :)
        
		number=number+1;
        System.out.println(number);
        ListNode head=new ListNode(number%10);
        ListNode newHead=head;
        number=number/10;
		while(number!=0){
            int rem=number%10;
            ListNode n= new ListNode(rem);
            head.next=n;
            head=head.next;
            number=number/10;
		}
        head.next=null;
        ListNode oHead=reverse(newHead);
        
        while(oHead!=null){
            System.out.print(oHead.data+"->");
            oHead=oHead.next;
        }
        System.out.print("NULL");
        
    }
}
