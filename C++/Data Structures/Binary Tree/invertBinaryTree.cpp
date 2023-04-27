// Program to invert a binary tree
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *l;
    Node *r;
    Node(int x){
        this->data=x;
        this->l=NULL;
        this->r=NULL;
    }
};

void inorderTraverse(Node *o){
    if(o==NULL){
        return;
    }
    inorderTraverse(o->l);
    cout<<o->data<<" ";
    inorderTraverse(o->r);
}

// function to recursively swap the child nodes of a parent node

void swapNodes(Node *x){

    if(x==NULL){
        return;
    }

    Node *temp;
    temp=x->l;
    x->l=x->r;
    x->r=temp;

    swapNodes(x->l);
    swapNodes(x->r);
}

int main(){
    Node *n1=new Node(4);
    Node *n2=new Node(2);
    Node *n3=new Node(7);
    Node *n4=new Node(1);
    Node *n5=new Node(3);
    Node *n6=new Node(6);
    Node *n7=new Node(9);

    n1->l=n2;
    n1->r=n3;
    n2->l=n4;
    n2->r=n5;
    n3->l=n6;
    n3->r=n7;

    Node *root = n1;
    
    cout<<"before inverting"<<endl;
    inorderTraverse(root);
    
    swapNodes(root);

    cout<<"after inverting"<<endl;
    inorderTraverse(root);

}