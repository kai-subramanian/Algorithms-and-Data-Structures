// Program to print middle node of linked list
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
};

int main(){
    Node *n1,*n2,*n3,*n4,*n5;
    n1=new Node();
    n2=new Node();
    n3=new Node();
    n4=new Node();
    n5=new Node();

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

    // // brute force
    // Node *head=new Node();
    // head=n1;
    // int length=0;
    // while(head!=NULL){
    //     length=length+1;
    //     head=head->next;
    // }
    // head=n1;
    // for(int i=0;i<length/2;i++){
    //     head=head->next;
    // }
    // cout<<head->data;
    Node *s=new Node();
    Node *f=new Node();
    Node *head=new Node();
    head=n1;
    s=head;
    f=head;

    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    cout<<s->data<<endl;
    
}