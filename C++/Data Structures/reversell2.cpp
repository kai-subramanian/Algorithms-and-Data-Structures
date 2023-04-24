// Program to reverse a chunk of a linked list
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
};

int main(){
    Node *n1=new Node();
    Node *n2=new Node();
    Node *n3=new Node();
    Node *n4=new Node();
    Node *n5=new Node();

    n1->data=12;
    n2->data=22;
    n3->data=32;
    n4->data=42;
    n5->data=52;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    int l=2;
    int r=4;

    Node *head=new Node();
    head=n1;
    
    // Reverse nodes between 2 and 4.
    // 12->22->32->42->52->NULL
    // 12->42->32->22->52->NULL
    Node *prev=NULL;
    Node *curr=new Node();
    Node *next=new Node();
    curr=head;
    next=curr->next;
    for(int i=0;curr!=NULL && i<l-1;i++){
        prev=curr;
        curr=curr->next;
        next=curr->next;
    }
    Node *last=new Node();
    last=prev;
    Node *newEnd=new Node();
    newEnd=curr;
    // Start reversing
    for(int i=0; curr!=NULL && i<(r-l)+1;i++){
        curr->next=prev;
        prev=curr;
        curr=next;
        if (next!=NULL){
            next=next->next;
        }
    }
    
    last->next=prev;
    newEnd->next=curr;

    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}