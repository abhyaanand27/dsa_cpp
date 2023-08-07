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

void print(node* tail){

    node* temp = tail;

    if(tail == NULL){
        cout << "list is empty" << endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);
    cout << endl;
}

void insertNode(node* &tail, int element, int d){
    // assuming that the element is present in the list

    // empty list
    if(tail == NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode -> next = newNode;
    } 

    else{
        // non-empty list

        node* curr =  tail;

        while(curr -> data != element){
            curr = curr -> next;
        }
        
        // element found -> curr is representing element wala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }


}

void deleteNode(node* &tail, int value){

    // empty list

    if(tail == NULL){
        cout << "List is empty, please check again" << endl;
        return;
    }
    else{
        // non-empty list

        // assuming that "value" is present in the linked list

        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        // 1 node 
        if(curr == prev){
            tail = NULL;
        }

        // 2 or more than 2 nodes
        prev -> next = curr -> next;
        if(tail == curr){
            tail = prev;
        }
        curr -> next =  NULL;
        delete curr;
    }
}


int main(){

    node* tail = NULL;

    //empty list
    insertNode(tail, 5, 3);
    
    insertNode(tail, 3, 5);
    // insertNode(tail, 5, 7);
    // insertNode(tail, 7, 9);
    // insertNode(tail, 5, 6);
    // insertNode(tail, 9, 10);
    
    
    print(tail);
    cout << endl;

    deleteNode(tail, 3);
    
    print(tail);
    
    cout << endl;
    return 0;
}