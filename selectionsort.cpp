#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;

        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n ;
    cout << "enter length of array: " << endl;
    cin >> n;
    cout << "enter elements" << endl;
    int *arr = new int[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    for(int j = 0; j<n; j++) {
       cout << arr[j] << " ";
    }
    return 0;


}