class Node{
    int data;
    Node next;
    Node(int x){
        data=x;
        next=null;
    }
}
class findMid{
    static int midNode(Node head){
        Node s=head;
        Node f=head;
        while(f!=null && f.next!=null){
            s=s.next;
            f=f.next.next;
        }
        return s.data;
    }
    public static void main(String args[]){
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

        Node head=n1;
        System.out.println(midNode(head));
    }
}