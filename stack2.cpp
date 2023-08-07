#include<bits/stdc++.h>
using namespace std;

class TwoStack {
    
public:
    int* arr;
    int top1;
    int top2;
    int size;

    // initialize TwoStack
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s - 1;
        arr = new int[size];
    }

    // push in stack1
    void push1(int num) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        }
        else {
            cout << "Stack 1 overflow" << endl;
        }
    }

    // push in stack2
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        }
        else {
            cout << "Stack 2 overflow" << endl;
        }
    }

    // pop for stack1 and return popped element
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else {
            return -1;
        }
    }

    // pop for stack2 and return popped element
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else {
            return -1;
        }
    }
};

int main() {
    TwoStack tst(10);
    tst.push1(5);
    tst.push2(7);

    
    cout << tst.pop1() << endl;
    
    return 0;
}