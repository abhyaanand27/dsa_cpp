#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    
    if(i>n){
        return;
    }
    cout << i <<".) Abhya" << endl;
    
    printName(i+1,n);
}

void printNum(int i, int n) {

    if(i>n) {
        return;
    }
    cout << i << " ";

    printNum(i+1,n);
}

void printBackwardNum (int i, int n) {
    if(i<1) {
        return;
    }
    cout << i << " ";

    printBackwardNum(i-1,n);
}

int sumOfNaturalNum(int i, int n) {
    
}

int main() {
    int n;
    cout << "Enter how many times should name be printed -> " << " ";
    cin>>n;
    cout << endl;
    // printName(1,n);
    // printNum(1,n); 
    printBackwardNum(n,n);
}