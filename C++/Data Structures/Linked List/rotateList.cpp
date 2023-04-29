// Program to reverse nodes in groups of k
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

int main(){
    Node *n1=new Node(11);
    Node *n2=new Node(21);
    Node *n3=new Node(31);
    Node *n4=new Node(41);
    Node *n5=new Node(51);
    Node *n6=new Node(61);
    Node *n7=new Node(71);
    Node *n8=new Node(81);
    Node *n9=new Node(91);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    n9->next=NULL;

    int k=2;
    Node *head=n1;
    int len=0;

    while(head!=NULL){
        len++;
        head=head->next;
    }
    head=n1;
    Node *newLast=NULL;
    // Skip the len-k nodes first
    for(int i=0;i<=len-k;i++){
        newLast=head;
        head=head->next;
    }
    Node *prev=newLast;
    Node *curr=head;
    Node *next=curr->next;

    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=next;
        if(next!=NULL){
            next=next->next;
        }
    }
    head=prev;
    newLast->next=n1;
    for(int i=0;i<len;i++){
        cout<<head->data<<" ";
        head=head->next;
    }

    
    


}