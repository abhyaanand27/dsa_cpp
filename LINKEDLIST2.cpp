#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int value;
    Node* next;
    Node* prev;
};

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

    while(head != NULL) {
        cout << head -> value << " ";
        head = head -> next;
    }
    return 0;
}
