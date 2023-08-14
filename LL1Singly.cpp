#include<bits/stdc++.h>
using namespace std;

class node {

    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
        // when a node is added value is assigned to data and next pointer is pointed to null
    }

    //destructor 
    ~node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
// send by refernce don't make a copy
void InsertAtHead(node* &head, int d){

    // create new node
    node* temp = new node(d);
    temp -> next = head; 
    head = temp; 
}

void InsertAtTail(node* &tail, int d){

    // create new node
    node* temp = new node(d);

    tail -> next =  temp;
    tail = tail -> next;
}

void InsertAtPosition(node* &tail, node* &head, int position, int d) {

    // to insert at 1st position
    if(position == 1){
        InsertAtHead(head,d);
        return; 
    }

    node* temp = head;
    int cnt = 1;
    
    // iterating through the linked list 
    while(cnt < position-1){
        temp = temp -> next; 
        cnt++;
    }

    // inserting at end
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);
    // inserting (nodeToinsert) at position
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void deleteNode(int position, node* &head){
    
    // deleting first node
    if(position == 1){
        node* temp = head;
        head = head -> next;
        //memory free using destructor
        temp -> next = NULL;
        delete temp;

    }
    else{
        // deleting middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}

void print(node* &head){
    node* temp = head;

    while(temp!=NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}   


int main(){

    // created a new node --- when a new node is created constructor is called.
    node* node1 = new node(10);  // new node is created named node1
    // refer constructor
    cout << node1 -> data << endl;  // -> used for pointers
    cout << node1 -> next << endl;

    // point both head and tail at the node1.
    node* head = node1; // points at first node
    node* tail = node1; // points at last node
    
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail, head, 4, 22);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(4, head);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    return 0;
}