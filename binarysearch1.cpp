#include<iostream>
using namespace std;


int Binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        
        if(key == arr[mid]){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main(){
    int n ;
    cout << "enter length of array: " << endl;
    cin >> n;
    cout << "enter elements" << endl;
    int *arr = new int[n];
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    int k;
    cout << "enter key to search" << endl;
    cin >> k;
    int ans = Binarysearch(arr, n, k);
    if (ans == -1) {
        cout << "element not found " << endl;
    }
    else {
        cout << "element is at index " << ans << endl;
    }

    return 0;
}