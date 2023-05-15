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

int sums(Node *h){
    list<Node*>q;
    int sumOfNodes=0;
    q.push_back(h);
    while(!q.empty()){
        Node *temp=q.front();
        sumOfNodes+=temp->d;
        q.pop_front();
        if(temp->l!=NULL){
            q.push_back(temp->l);
        }
        if(temp->r!=NULL){
            q.push_back(temp->r);
        }
    }
    return sumOfNodes;
}

int main(){
    Node *n1=new Node(1);
    Node *n2=new Node(2);
    Node *n3=new Node(3);
    Node *n4=new Node(4);
    Node *n5=new Node(5);
    Node *n6=new Node(6);
    Node *n7=new Node(100);
    
    n1->l=n2;
    n1->r=n5;

    n2->l=n3;
    n2->r=n4;

    n5->l=n6;
    n5->r=n7;

    Node *root=n1;

    cout<<sums(root)<<endl;

}
