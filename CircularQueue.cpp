#include<bits/stdc++.h>
#include<iostream>

using namespace std;



class MyCircularQueue {
    int *arr;
    int size;
    int rear;
    int front;
public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }
    
    bool enQueue(int value) {
        // queue is full
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1)))  {
            return false;
        }

        // first element
        else if (front == -1)  {
            front = rear = 0;
            arr[rear] = value;
            return true;
        }

        // rear at end and front somewhere in middle
        else if(rear == size-1 && front != 0) {
            rear = 0;
            arr[rear] = value;
            return true;
        }

        // ordinary case
        else {
            rear++;
            arr[rear] = value;
            return true;
        }
    }
    
    bool deQueue() {
        // empty queue
        if(front == -1)  {
            return false;
        }    

        // only 1 element is  presennt 
        else if (front == rear) {
            front = rear = -1;
            return true;
        }

        // if front at end
        else if(front == size-1) {
            front = 0;
            return true;
        }

        else {
            front++;
            return true;
        }
    }
    
    int Front() {
        if (front == -1) {
            return -1;
        }
        else {
            return arr[front];
        }
    }
    
    int Rear() {
        if (front == -1) {
            return -1;
        }
        else {
            return arr[rear];
        }
    }
    
    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    
    bool isFull() {
        if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1)))  {
            return true;
        }
        else {
            return false;
        }
    }
};


int main(){

    MyCircularQueue cq(2);
    cout << cq.enQueue(1) << endl;
    cout << cq.enQueue(2) << endl;
    cout << cq.deQueue() << endl;
    cout << cq.enQueue(3) << endl;
    cout << cq.deQueue() << endl;
    cout << cq.enQueue(3) << endl;
    cout << cq.deQueue() << endl;
    cout << cq.enQueue(3) << endl;
    cout << cq.deQueue() << endl;
    cout << cq.Front() << endl;





   


    return 0;
}