#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    
    if(i>n){
        return;
    }
    cout << i <<".) Abhya" << endl;
    
    printName(i+1,n);
}

int main() {
    int n;
    cout << "Enter how many times should name be printed -> " << " ";
    cin>>n;
    cout << endl;
    printName(1,n); 
}