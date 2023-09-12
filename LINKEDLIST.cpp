#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int value;
    Node* next;
};

void InsertAtHead(Node* &head, int d){

    Node* temp = new Node();
    temp -> value = d;
    temp -> next = head; 
    head = temp; 
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node();
    temp -> value = d;
    tail -> next =  temp;
    tail = tail -> next;
}

int main() {
    Node* head;
    Node* tail;
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();

    one-> value = 10;
    two-> value = 20;
    three-> value = 30;

    one-> next = two;
    two-> next = three;
    three-> next = NULL;
    head = one;
    tail = three;

    

    cout << endl;
    cout << "Printing values of linked list:" << endl;
    InsertAtHead(head,500);
    InsertAtTail(tail,400);

    while(head!=NULL){
        cout << head->value << " ";
        head = head->next;
    }

    


    return 0;
}