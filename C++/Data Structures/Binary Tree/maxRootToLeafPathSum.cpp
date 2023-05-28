#include<iostream>
#include<algorithm>
using namespace std;

class Node{
 public:
    int d;
    Node *l;
    Node *r;
    Node(int x){
        d=x;
        l=NULL;
        r=NULL;
    }
};

int maxSumFind(Node *root){
    if(root==NULL){
        return 0;
    }
    if(root->l==NULL && root->r==NULL){
        return root->d;
    }
    return root->d+max(maxSumFind(root->l),maxSumFind(root->r));
}

int main(){
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(3);
    Node *n4=new Node(4);
    Node *n5=new Node(5);
    Node *n6=new Node(6);
    Node *n7=new Node(7);
    
    n1->l=n2;
    n1->r=n5;

    n2->l=n3;
    n2->r=n4;

    n5->l=n6;
    n5->r=n7;

    Node *root=n1;

    cout<<maxSumFind(root);

}