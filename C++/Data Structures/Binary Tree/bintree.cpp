// Program for binary tree
#include<iostream>
using namespace std;

// Create a node for a bianry tree
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


void preorderTraverse(Node *n){
    if(n==NULL){
        return;
    }
    cout<<n->data<<" ";
    preorderTraverse(n->l);
    preorderTraverse(n->r);
}

void inorderTraverse(Node *o){
    if(o==NULL){
        return;
    }
    inorderTraverse(o->l);
    cout<<o->data<<" ";
    inorderTraverse(o->r);
}

void postorderTraverse(Node *p){
    if(p==NULL){
        return;
    }
    inorderTraverse(p->l);
    inorderTraverse(p->r);
    cout<<p->data<<" ";
}

int main(){
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);
    Node *n5=new Node(50);
    Node *n6=new Node(60);
    Node *n7=new Node(70);

    n1->l=n2;
    n1->r=n3;
    n2->l=n4;
    n2->r=n6;
    n3->l=n5;
    n3->r=n7;

    Node *root=n1;
    cout<<"Preorder traversal"<<endl;
    preorderTraverse(root);
    cout<<endl;
    cout<<"Inorder Traversal"<<endl;
    inorderTraverse(root);
    cout<<endl;
    cout<<"Postorder Traversal "<<endl;
    postorderTraverse(root);
    cout<<endl;
}