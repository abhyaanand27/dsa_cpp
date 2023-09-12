#include<iostream>
using namespace std;

void printForward(int i, int n){
    if(i<1) {
        return;
    }

    printForward(i-1, n);
    cout << i << " ";
}

void printBackward(int i, int n) {
    if(i>n) {
        return;
    }
    printBackward(i+1,n);
    cout << i << " ";
}

int main() {
    int n;
    cout << "Enter how many times should name be printed -> " << " ";
    cin>>n;
    cout << endl;

    cout << "Forward using backtracking" << endl;
    printForward(n,n);
    cout << endl << endl;

    cout << "Backward using backtracking" << endl;
    printBackward(1,n);
    cout << endl << endl;

}