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
    Node* temp = one;

    one -> value = 10;
    two -> value = 20;
    three -> value = 30;
    head = one;
    

    one-> next = two;
    two-> next = three;
    three-> next = one;
    head = one;
    cout << temp -> value << " ";
    temp = head -> next;

    while(temp != head) {
        cout << temp -> value << " ";
        temp = temp -> next;
    }
    
    return 0;

}