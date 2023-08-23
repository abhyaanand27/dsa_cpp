#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // base case
    if(n==0 || n==1) {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}

int main() {
    int n, fact;
    cout << endl;
    cout << "enter the no: ";
    cin >> n;
    fact = factorial(n);
    cout << "factorial of " << n << ": " << fact;
    return 0;
}