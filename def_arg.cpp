#include<iostream>
using namespace std;

void print(int arr[], int n , int start = 0){ //start--> default arg
// default should always start from right most
    for (int i = start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){

    int arr[5] = {1,4,7,8,9};
    int size = 5;
    print(arr, size, 0);
    cout << endl;
    print(arr, size, 3);
    cout << endl;
    print(arr, size); // create optional for inpute of start
    cout << endl;


    return 0;
}