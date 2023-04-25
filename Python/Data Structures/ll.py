class Node:
    data=0
    next=None

n1=Node()
n2=Node()
n3=Node()
n4=Node()
n5=Node()
n6=Node()

n1.data=11
n2.data=21
n3.data=31
n4.data=41
n5.data=51
n6.data=61

n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
n5.next=n6
n6.next=None

head=n1

while head is not None:
    print(head.data,end="->")
    head=head.next

