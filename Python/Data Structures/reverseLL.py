class Node:
    def __init__(self,data=None):
        self.data=data
        self.next=None

n1=Node(11)
n2=Node(21)
n3=Node(31)
n4=Node(41)
n5=Node(51)
n6=Node(61)

n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
n5.next=n6
n6.next=None

prev=None
curr=n1
next=n1.next

while curr is not None:
    curr.next=prev
    prev=curr
    curr=next
    if next is not None:
        next=next.next

head=prev

while head is not None:
    print(head.data,end=" ")
    head=head.next
print()