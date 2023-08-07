#include<iostream>
using namespace std;

int main(){

/*
    int n;
        cout<<"Enter the value of n: "<<endl;
        cin>>n;
        int i=1;
        while(i<=n){
            cout<<i<<endl;
            i=i+1;
        }
*/


    int n;
    cout<<"Enter value of n :-"<<endl;
    cin>>n;
    int i=1;
    int a=0;
    while(i<=n){
        a=a+i;
        i=i+1;
    }
    cout<<"Sum is: "<<a<<endl;

}