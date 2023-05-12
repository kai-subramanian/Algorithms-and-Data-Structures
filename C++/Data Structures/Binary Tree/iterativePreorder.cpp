#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* l;
    Node* r;
    Node(int x){
        this->data=x;
        this->l=this->r=nullptr;
    }
};

void preorderTraverse(Node *root){
    if (root == nullptr){
        return;
    }
    stack<Node*> s;
    s.push(root);
    while (!s.empty()){
        Node* curr = s.top();
        s.pop();
        cout << curr->data << " ";
        if (curr->r) {
            s.push(curr->r);
        }
        if (curr->l) {
            s.push(curr->l);
        }
    }
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
}