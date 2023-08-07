#include<iostream>
using namespace std;
int main(){
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl;

    return 0;
}