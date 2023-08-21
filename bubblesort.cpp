#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i<n-1; i++) {
        for(int j =0; j< n-1-i ; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int i,n;
    cout << "enter size of array" << endl;
    cin >> n;
    cout << "enter numbers:" << endl; 
    int *arr = new int[n];
    for(i=0; i<n; i++) {
        cin>> arr[i];
    }
    
    bubbleSort(arr,n);
    for(int j = 0; j<n; j++) {
       cout << arr[j] << " ";
    }
    return 0;
}