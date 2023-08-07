#include<iostream>
using namespace std;


// BINARY SEARCH CODE
/*
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
    int even[6] = {2,9,16,31,52,59};
    int odd[5] = {3,8,16,21,25};

    int evenindex = Binarysearch(even, 6, 59);
    int oddindex = Binarysearch(odd, 5, 25);

    cout << "index of 59 is " << evenindex << endl;
    cout << "index of 25 is " << oddindex << endl;
}  */



// QUESTIONS

// FIRST AND LAST POSITION OF AN ELEMENT IN SORTED ARRAY

/*
int FirstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    return ans;

}

int LastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end - start)/2;
    }

    return ans;

}

int main(){

    int odd[9] = {1,2,3,3,3,3,3,3,5};

    cout << "First Occurrence of 3 is at index  " << FirstOcc(odd, 5, 3) << endl;
    cout << "Last Occurrence of 3 is at index " << LastOcc(odd, 5, 3) << endl;

    return 0;
}*/


// FIND PIVOT IN AN ARRAY

int GetPivot(int arr[], int n){
    
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if (arr[mid] >= arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; // can also type return e;

}

int main(){

    int arr[5] = {6,9,12,0,3};

    cout << "Pivot is at index " << GetPivot(arr,5);

    return 0;
}
