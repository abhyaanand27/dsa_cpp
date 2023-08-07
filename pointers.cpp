#include<iostream>
using namespace std;


void print(int *p){

    cout << *p << endl;
}

void update(int *p){
    //p = p+1;
    //cout << "inside " << p << endl;
    *p = *p+1;
}
// here a pointer is created in getsum
int getsum(int *arr, int n){

    cout << endl << "size: " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}

int main(){
/*
    int i=3;
    int *ptr = &i;
    cout << *ptr << endl;


    //character arrays

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];

    //print entire string
    cout << c << endl;

    //value at index 0
    cout << *c << endl;  

    // what  will happen when there is no null char
     
    char temp = 'z';
    char *p = &temp;
    cout << p << endl; 

    int value = 5;
    int *p = &value;

    //print(p);
    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;
    // you'll get the same value even after update  */ 


    int arr[5] = {1,2,3,4,5};

    cout << "sum is " << getsum(arr,5) << endl;
    cout << "sum is " << getsum(arr+3,2) << endl;



    return 0;
}
