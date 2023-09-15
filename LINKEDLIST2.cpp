#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int value;
    Node* next;
    Node* prev;
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node();
    temp -> value = d;
    temp -> next = head;
    head -> prev = temp;
    head = temp; 
}

void insertAtTail(Node* &head, int d) {
    Node* tail = new Node();
    tail = head;
    while(tail -> next != NULL) {
        tail = tail -> next;
    }
    Node* temp = new Node();
    temp -> value = d;
    temp -> next = NULL;
    temp -> prev = tail;
    tail -> next = temp;
}

void insertAtPosition(Node* &head, int d, int position) {
    
    if(position == 1){
        insertAtHead(head, d);
        return; 
    }
    Node* temp = head;
    int cnt = 1;
    
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    
    if(temp -> next == NULL){
        insertAtTail(head,d);
        return;
    }


    Node* nodeToInsert = new Node();
    nodeToInsert -> value = d;

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(Node* head, int p) {

    Node* temp = new Node();
    if(p == 1) {

    }
}
int main() {
    Node* head;
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();

    one -> value = 10;
    two -> value = 20;
    three -> value = 30;
    head = one;

    one -> prev = head;
    one -> next = two;
    two -> prev = one;
    two -> next = three;
    three -> prev = two;
    three -> next = NULL;

    insertAtTail(head, 25);
    insertAtPosition(head, 3, 44);

    while(head != NULL) {
        cout << head -> value << " ";
        head = head -> next;
    }
    return 0;
}
