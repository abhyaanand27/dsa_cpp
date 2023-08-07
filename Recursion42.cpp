#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int power (int a, int b){

    // base case

    if(b == 0)
        return 1;
    if(b == 1)
        return a;

    int ans = power (a, b/2);

    if(b%2 == 0)         // b is even
        return ans * ans;
    else                 // b is odd
        return a* ans * ans;    
}

int main(){

    int a, b;
    cout << "enter a and b respectively" << endl;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "ans --> " << ans;


    return 0;
}