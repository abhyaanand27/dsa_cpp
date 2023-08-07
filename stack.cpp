#include<bits/stdc++.h>
using namespace std;

class Stack {

    // properties
    public:
        int *arr;
        int top;
        int size;

    // functions

    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element) {
        if (size - top > 1){
            top++;
            arr[top] = element;
        }
        else {
            cout << "stack overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        }
        else {
            cout << "stack underflow" << endl;
        }
    }

    int peek() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout << "stack is empty" << endl;
            return -1;
        }
        
    }

    bool isempty() {
        if(top == -1){
            return true;
        }
        else {
            return false;
        }
    }

};




int main(){

    Stack st(5);
    st.push(22);
    st.push(13);
    st.push(17);
    st.push(17);
    st.push(17);
    st.push(17);
    

    cout << st.peek() << endl;
    
    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;


    if(st.isempty()) {
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }




    


/*    // creation of stack
    stack <int> s;

    // insert element
    s.push(2);
    s.push(3);
    
    // delete element
    s.pop();

    cout << "Printing top element " << s.top() << endl;
    
    if(s.empty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }

    cout << "size is " << s.size() << endl;  */

    



    return 0;
}