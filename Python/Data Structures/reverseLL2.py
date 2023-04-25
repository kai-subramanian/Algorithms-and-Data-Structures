class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
n1=Node(81)
n2=Node(82)
n3=Node(83)
n4=Node(84)
n5=Node(85)
n6=Node(86)
n7=Node(87)
n8=Node(88)


n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
n5.next=n6
n6.next=n7
n7.next=n8
n8.next=None

head=n1

l=5
r=6

prev=None
curr=head

for i in range (0,l-1):
    prev=curr
    curr=curr.next

next=curr.next

oldLast=prev
newEnd=curr

for i in range (0,(r-l+1)):
    curr.next=prev
    prev=curr
    curr=next
    if next is not None:
        next=next.next

oldLast.next=prev
newEnd.next=curr

while head is not None:
    print(head.data,end="->")
    head=head.next