#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int value;
    Node* next;
};

void insertAtHead(Node* &head, int d){

    Node* temp = new Node();
    temp -> value = d;
    temp -> next = head; 
    head = temp; 
}

void insertAtTail(Node* &head, int d){
    Node* tail = head;
    while(tail -> next != NULL) {
        tail = tail -> next;
    }
    Node* temp = new Node();
    temp -> value = d;
    tail -> next = temp;
    
}

void insertAtPosition(Node* &head, int d, int position) {

    Node* curr = head;
    int cnt = 1;
    
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    while(cnt < position-1) {
        curr = curr -> next;
        cnt++;
    }

    if(curr -> next == NULL) {
        insertAtTail(head, d);
        return;
    }

    Node* nodeToInsert = new Node();
    nodeToInsert -> value = d;

    nodeToInsert -> next = curr -> next;
    curr -> next = nodeToInsert;

}

int main() {
    Node* head;
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

    cout << endl;
    cout << "Printing values of linked list:" << endl;
    insertAtHead(head,500);
    insertAtTail(head,400);
    insertAtPosition(head, 40, 5);
    insertAtPosition(head, 50, 6);

    while(head!=NULL){
        cout << head->value << " ";
        head = head->next;
     }
    return 0;
}