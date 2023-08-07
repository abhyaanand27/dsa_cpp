#include<bits/stdc++.h>
using namespace std;

class Queue {

    public:
        int *arr;
        int front;
        int rear;
        int size;

    Queue(int size) {
        this -> size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int element) {
        if (rear == size -1) {
            cout << "queue is full" << endl;
        }
        else {
            arr[rear] = element;
            rear++;
        }
    }

    int pop() {
        if(front == rear) {
            cout << "queue is empty" << endl;
        }
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            return ans;
        }
    }

    bool isempty() {
        if(front == rear) {
            return true;
        }
        else{
            return false;
        }
    }

    int first() {
        if(front == rear) {
            return -1;
        }
        else {
            return arr[front];
        }
    } 
};

int main(){

    Queue q(5);

    q.push(7);
    q.push(1);
    q.push(2);
    cout << endl;

    cout << q.first() << endl;

    cout << q.pop() << endl;
    cout << q.first() << endl;

    cout << q.pop() << endl;
    cout << q.first() << endl;

    cout << q.pop() << endl;
    cout << q.first() << endl;
    
    




    cout << endl;
    return 0;
}