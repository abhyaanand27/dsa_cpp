#include <iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0)
        return ;
    
    cout << n << " ";
    print(n-1);

}


int factorial(int n){

    //base case
    if(n==0)
        return 1;

    return n * factorial(n-1);
    
}

int main(){
    
    int n;
    cin>> n;

    int ans =  factorial(n);

    cout << ans << endl;
    cout << endl; 

    print(n);

    return 0;
}