#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool linearSearch(int arr[], int size, int key){



    // base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key)
        return true;

    else{
        bool ans = linearSearch(arr+1, size-1, key);
        return ans;
    }

}

bool binarySearch(int arr[], int s, int e, int k){

    int mid = s + (e-s)/2;

    // base case
    if (s>e)
        return false;
    if (arr[mid == k]){
        return true;
    }

    if ( k > arr[mid]){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }


}




int main(){

    int arr[5] = {2,5,9,11,25};
    int size = 5;
    int key = 21;

    int anss = linearSearch(arr, size, key);
    if(anss){
        cout << endl << endl << "found" << endl << endl << endl;
    }
    else{
        cout << endl << endl << "not found" << endl << endl << endl;
    }

    int s = 0;
    int e = size - 1;
    int anss1 = binarySearch(arr, s, e, key);
    if(anss){
        cout << endl << endl << "found" << endl << endl << endl;
    }
    else{
        cout << endl << endl << "not found" << endl << endl << endl;
    }

    

    return 0;
}

