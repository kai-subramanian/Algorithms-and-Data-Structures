// Program to check if the parent node is equal to left node + right node
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *left;
    Node *right;
    Node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};

void sumNodes(Node *root){
    
    if(root == NULL || root->left==NULL || root->right==NULL){
        return;
    }
    if ( root->left->data + root->right->data == root->data){
        cout<<"Yes"<<endl;
        sumNodes(root->left);
        sumNodes(root->right);
    }
}

int main(){
    Node *n1=new Node(10);
    Node *n2=new Node(8);
    Node *n3=new Node(2);
    Node *n4=new Node(3);
    Node *n5=new Node(5);
    Node *n6=new Node(2);

    n1->left=n2;
    n1->right=n3;

    n2->left=n4;
    n2->right=n5;

    n3->left=n6;
    Node *r=n1;

    sumNodes(r);
}