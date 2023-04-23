// Program to detect a loop in a linked list
#include<iostream>
using namespace std;

class Node{
 public:
    int data;
    Node *next;
};

int main(){
    Node *n1,*n2,*n3,*n4,*n5;
    n1=new Node();
    n2=new Node();
    n3=new Node();
    n4=new Node();
    n5=new Node();

    n1->data=5;
    n2->data=10;
    n3->data=15;
    n4->data=20;
    n5->data=25;

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=NULL; // creating a loop

    // Logic to detect loop -> Floyd's tortoise and hare cycle detection algorithm.
    // Hare moves at two paces; tortoise moves at one pace.
    // If there is a loop, both hare and tortoise are bound to meet at one point
    // Since tortoise moves at one pace at a time, it is guaranteed to cover all the steps.
    // Hare moves two paces at a time, and when modulo'd, it ^ALTERNATES^ the paces it was covering,
    // If next is not null, the hare is forced to come back. If it is null, hare 
    // does not come back, it means there is no loop.
    // Tortoise is still covering the same paces. Ergo, proving that both will meet.
    // TLDR - If there is a loop, both meet; if they don't meet, there is no loop.

    Node *hare=n1;
    Node *tortoise=n1;

    while (tortoise!=NULL && hare!=NULL && hare->next!=NULL) {
        tortoise=tortoise->next; // Tortoise moving one pace
        hare=hare->next->next; // Hare moving by two paces
        if(tortoise==hare){
            cout<<"loop detected list rejected";
            break;
        }
    }

}