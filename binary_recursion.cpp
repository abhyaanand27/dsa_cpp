#include<iostream>
using namespace std;


int Binarysearch(int arr[], int start, int end , int key){

    int mid = start + (end - start)/2;

    if(start <= end){

        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            return Binarysearch(arr, mid+1, end, key);
        }
        else{
            return Binarysearch(arr, 0, mid-1, key);
        }
    }
    return -1;
}

int main(){
    int end ;
    cout << "enter length of array: " << endl;
    cin >> end;
    cout << "enter elements" << endl;
    int *arr = new int[end];
    for(int i = 0; i<end; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "enter key to search" << endl;
    cin >> key;
    int ans = Binarysearch(arr, 0, end, key);
    if (ans == -1) {
        cout << "element not found " << endl;
    }
    else {
        cout << "element is at index " << ans << endl;
    }

    return 0;
}