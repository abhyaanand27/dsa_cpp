#include <iostream>
using namespace std;

// inline func to remove funtion call 
// & to prevent creation of copy of a and b to reduce memory usages
inline int getmax(int& a, int& b){

    return (a>b) ? a : b;  //TERTIARY OPERATOR
}
// inline will help to replace getmax everywhere with its retuern 
// value before compilation
// no need to call func and create new storage

int main(){

    int a = 1, b = 2;
    int ans = 0;
    
    //can be written using tertiary operator
/*  if (a>b){
        ans = a;
    }
    else{
        ans = b;
    } */

    ans = getmax(a,b);
    cout << ans << endl;  

    a = a + 3;
    b = b + 1;

    ans = getmax(a,b);
    cout << ans << endl;

    return 0;
}