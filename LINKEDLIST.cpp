#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int value;
    Node* next;
};

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

    while(head!=NULL){
        cout << head->value << " ";
        head = head->next;
    }

    return 0;
}