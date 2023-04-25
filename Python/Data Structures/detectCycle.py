class Node:
    def __init__(self, data):
        self.data=data
        self.next=None

n1=Node(20)
n2=Node(21)
n3=Node(22)
n4=Node(23)
n5=Node(24)
n6=Node(25)

n1.next=n2
n2.next=n3
n3.next=n4
n4.next=n5
n5.next=n6
n6.next=None

head=n1

tortoise=head
hare=head

while tortoise is not None and \
    hare is not None:
    tortoise=tortoise.next
    hare=hare.next.next
    if tortoise==hare:
        print("Loop detected")
        break




