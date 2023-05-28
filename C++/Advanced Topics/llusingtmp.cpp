#include<iostream>
using namespace std;

class LinkedList;
class Node{
    int data;
    Node *next;
    Node(int y){
        data=y;
        next=NULL;
    }
    friend class LinkedList;
};
class LinkedList{
 public:
    Node* n1=new Node(1);
    Node* n2=new Node(23);
    Node* n3=new Node(35);
    Node* n4=new Node(68);
    Node* n5=new Node(90);

    void linker(){
        n1->next=n2;
        n2->next=n3;
        n3->next=n4;
        n4->next=n5;
        n5->next=NULL;
    }
    void displayPrivateInfo(){
        cout<<"n1->next = "<<n1->next<<endl;
        cout<<"n2->next = "<<n2->next<<endl;
    }
};

int main(){
    LinkedList ll;
    cout<<"Before linking"<<endl;
    ll.displayPrivateInfo();
    ll.linker();
    cout<<"After linking"<<endl;
    ll.displayPrivateInfo();

}