#include<iostream>
using namespace std;

int sum(int n) {
    int sum = 0;
    while(n!=0) {
        int val = n%10;
        sum += val*val;      
        n /= 10;
    }
    return sum;
}  

bool isHappy(int n) {
    int ans;
    while(ans!=1){
        ans = sum(n);
    }

        
    return false;
}

int main(){

int n = 19;
cout << isHappy(n) << endl;

}


