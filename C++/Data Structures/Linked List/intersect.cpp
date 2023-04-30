// Program to find intersection of two linked lists
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
    bool flag;
    Node(int x){
        this->data=x;
        this->next=NULL;
        this->flag=false;
    }
};

void findIntersect(Node *head1, Node *head2){
    Node *temp1=head1;
    while(temp1!=NULL){
        temp1->flag=true;
        temp1=temp1->next;
    }
    temp1=head2;
    while(temp1!=NULL){
        if(temp1->flag){
            cout<<temp1->data<<endl;
            break;
        } else{
            temp1->flag=true;
        }
        temp1=temp1->next;
    }
}

int main(){
    Node *n1=new Node(6);
    Node *n2=new Node(7);
    Node *n3=new Node(8);
    Node *n4=new Node(9);
    Node *n5=new Node(10);

    Node *n6=new Node(14);
    Node *n7=new Node(15);
    Node *n8=new Node(16);
    Node *n9=new Node(17);

    // Linked List 1

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL;

    // Linked List 2

    // n1->n2->n3->n4->n5->NULL
    //          \  
    //           \
    //            \
    // n6->n7->n8->n9

    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    n9->next=n2;

    Node *h1=n1;
    Node *h2=n6;

    findIntersect(h1,h2);



    return 0;
}