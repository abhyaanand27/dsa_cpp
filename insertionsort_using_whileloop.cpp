#include <iostream>
using namespace std;
 
void insertionSort(int arr[], int n) {
    for(int i = 1; i<n; i++) {
	    int temp = arr[i];
        int j = i-1;
	    while(j>=0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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
    insertionSort(arr, n);
    for(int j = 0; j<n; j++) {
       cout << arr[j] << " ";
    }
    return 0;


}