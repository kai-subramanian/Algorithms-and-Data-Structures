// Program to demonstrate singly linked list
#include<iostream>
using namespace std;

class Node{
 public:
    int value;
    Node *next;
};

int main(){
    Node *head=NULL;
    Node *n1=NULL;
    Node *n2=NULL;
    Node *n3=NULL;
    Node *n4=NULL;

    n1=new Node();
    n2=new Node();
    n3=new Node();
    n4=new Node();

    n1->value=11;
    n2->value=21;
    n3->value=31;
    n4->value=41;

    head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;

    while(head!=NULL){
        cout<<head->value<<" ";
        head=head->next;
    }

    return 0;
}