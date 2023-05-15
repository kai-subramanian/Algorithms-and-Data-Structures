#include<iostream>
#include<list>
#include<vector>

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

bool searchNode(Node* n, Node* search){
    list<Node*>q;
    q.push_back(n);
    while(!q.empty()){
        Node* x=q.front();
        if(x==search){
            return true;
        }
        q.pop_front();
        if(x->l!=NULL){
            q.push_back(x->l);
        }
        if(x->r!=NULL){
            q.push_back(x->r);
        }
    }
    return false;
}

int main(){
Node *n1=new Node(0);
    Node *n2=new Node(1);
    Node *n3=new Node(2);
    Node *n4=new Node(3);
    Node *n5=new Node(4);
    Node *n6=new Node(5);
    Node *n7=new Node(6);
    Node *n8=new Node(7);

    n1->l=n2;
    n1->r=n5;

    n2->l=n3;
    n2->r=n4;

    n5->l=n6;
    n5->r=n7;

    Node *root=n1;
    Node *search=n3;
    cout<<searchNode(root,search)<<endl;
}