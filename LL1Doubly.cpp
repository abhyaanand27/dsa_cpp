#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    // condtructor
    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // descructor
    ~node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << val << endl;
    }
};

void InsertAtHead(node* &head, node* &tail, int d){

    // create new node

    if(head == NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void InsertAtTail(node* &head, node* &tail, int d){

    if(tail == NULL){
        node* temp = new node(d);
        tail = temp;
        head = temp;
    }
    // create new node
    else{
        node* temp = new node(d);
        tail -> next =  temp;
        temp -> prev = tail; 
        tail = temp;
    }
}

void InsertAtPosition(node* &tail, node* &head, int position, int d) {

    // to insert at 1st position
    if(position == 1){
        InsertAtHead(head, tail, d);
        return; 
    }

    node* temp = head;
    int cnt = 1;
    

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    // inserting at end
    if(temp -> next == NULL){
        InsertAtTail(head, tail, d);
        return;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}   

void print (node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;    
    }
    cout << endl;
}

void deleteNode(int position, node* &head){
    
    // deleting first or start node
    if(position == 1){
        node* temp = head;
        temp -> next -> prev = NULL;
        head = head -> next;
        //memory free
        temp -> next = NULL;
        delete temp;

    }
    else{
        // deleting and middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next -> prev = prev;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;
    }

}

//length of linked list
int getLength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;    
    }
    return len;
}

int main(){

    
    node* head = NULL;
    node* tail = NULL;

    print(head);


    InsertAtHead(head, tail, 11);
    InsertAtHead(head, tail, 42);
    InsertAtHead(head, tail, 2);

    InsertAtTail(head, tail, 25);
    InsertAtTail(head, tail, 17);
    
    cout << endl;
    print(head);


    InsertAtPosition(tail, head, 3, 13);

    
    cout << endl;
    print(head);

    cout << getLength(head) << endl;

    deleteNode(5, head);

    cout << endl;
    print(head);
    cout << getLength(head) << endl;


    cout << endl;
    return 0;
}
