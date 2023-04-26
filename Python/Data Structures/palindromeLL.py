class Node:
    def __init__(self,data=None, next=None):
        self.data=data
        self.next=None

n1=Node(13)
n2=Node(23)
n3=Node(33)

n4=Node(53)

n5=Node(33)
n6=Node(23)
n7=Node(13)

n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
n5.next=n6
n6.next=n7
n7.next=None

head=n1
preHead=head
slow=head
fast=head

while fast is not None and fast.next is not None:
    slow=slow.next
    fast=fast.next.next

prev=None
curr=slow
next=curr.next

while curr is not None:
    curr.next=prev
    prev=curr
    curr=next
    if next is not None:
        next=next.next
head=prev

isPalindrome = True

while preHead is not head and head is not None:
    if preHead.data != head.data :
        isPalindrome=False
        break
    head=head.next
    preHead=preHead.next

if isPalindrome:
    print("yes")
else:
    print("no")
















