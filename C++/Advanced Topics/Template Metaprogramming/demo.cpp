/*
Template is nothing but writing generic code, such that it runs for all data types. Two types - class and function templates
syntax - 
template <class T>
class ABC{
    T x;
    T y;
    public:
    T myFunction(T a){

    }
};
*/
#include<iostream> 
template <class N>
class Node{
 public:
    N data;
    Node *next;
    Node(N x){
        data=x;
        next=NULL;
    }
};
template <class L>
class LinkedList{
 public:
    // Nodes of type integer
    Node<L> *head=new Node<L>(0);
    Node<L> *origHead=head;
    void createNode(L y){
        Node<L> *nn=new Node(y);
        head->next=nn;
        head=nn;
    }

    void displayNode(){
        origHead=origHead->next;
        while(origHead!=NULL){
            std::cout<<origHead->data<<"->";
            origHead=origHead->next;
        }
        std::cout<<std::endl;
    }
};

int main(){
    // Of types integer
    LinkedList<int> ll;
    ll.createNode(3);
    ll.createNode(6);
    ll.createNode(9);
    ll.createNode(12);
    ll.createNode(15);

    ll.displayNode();
    
    // Of types float
    LinkedList<float> llf;
    llf.createNode(3.14);
    llf.createNode(6.28);
    llf.createNode(9.42);
    llf.createNode(12.56);
    llf.createNode(15.70);

    llf.displayNode();

    // Of types char
    LinkedList<char> llc;
    llc.createNode('a');
    llc.createNode('b');
    llc.createNode('c');
    llc.createNode('d');
    llc.createNode('e');
    llc.displayNode();

}
