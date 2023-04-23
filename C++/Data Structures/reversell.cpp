// Program to reverse a linked list
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
};

int main(){
    // prologic
    Node *head;
    Node *n1=new Node();
    Node *n2=new Node();
    Node *n3=new Node();
    Node *n4=new Node();
    Node *n5=new Node();

    n1->data=10;
    n2->data=20;
    n3->data=30;
    n4->data=40;
    n5->data=50;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    head=n1;

    Node *prev=new Node();
    Node *curr=new Node();
    Node *nex=new Node();
    curr=head;
    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    head=prev;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }






}
