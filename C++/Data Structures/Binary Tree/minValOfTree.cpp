#include<iostream>
#include<list>

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

Node* minimumNode(Node *h){
    list<Node*>q;
    Node *miniNode=h;
    q.push_back(h);
    while(!q.empty()){
        Node *temp=q.front();
        if(temp->d<miniNode->d){
            miniNode=temp;
        };
        q.pop_front();
        if(temp->l!=NULL){
            q.push_back(temp->l);
        }
        if(temp->r!=NULL){
            q.push_back(temp->r);
        }
    }
    return miniNode;
}

int main(){
    Node *n1=new Node(101);
    Node *n2=new Node(202);
    Node *n3=new Node(103);
    Node *n4=new Node(4000);
    Node *n5=new Node(105);
    Node *n6=new Node(601);
    Node *n7=new Node(100);
    
    n1->l=n2;
    n1->r=n5;

    n2->l=n3;
    n2->r=n4;

    n5->l=n6;
    n5->r=n7;

    Node *root=n1;

    cout<<minimumNode(root)<<endl;
    cout<<minimumNode(root)->d<<endl;

}
