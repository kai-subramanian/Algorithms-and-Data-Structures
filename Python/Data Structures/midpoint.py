class Node:
    def __init__(self,data=None):
        self.data=data
        self.next=None

n1=Node(1)
n2=Node(2)
n3=Node(3)
n4=Node(4)
n5=Node(5)
n6=Node(6)
n7=Node(7)


n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
n5.next=n6
n6.next=n7
n7.next=None

head=n1

slow=head # moves at one pace
fast=head # moves at two paces
ans=head

while fast is not None and fast.next is not None:
    slow=slow.next # one pace
    fast=fast.next.next # two paces

print(slow.data)
