#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// check sorted array

bool isSorted(int arr[], int size){

    // base case
    if(size==0 || size==1)
        return true;

    // processing
    if (arr[0] > arr[1])
        return false;

    // recursion call
    else{ 
        bool remainingPart = isSorted (arr+1, size-1);
        return remainingPart;
    }


}

// print sum of array

int getsum(int arr[], int size){

    // base case
    if (size == 0){
        return 0;
    }
    if (size == 1){
        return arr[0];
    }

    // processing
    int sum = arr[0] + arr[1];

    // recursive call
    sum += getsum(arr + 2, size - 2);
    return sum;

}


int main(){
    int arr[6] = {2,2,8,1,9,3};
    int size = 6;

    bool ans =  isSorted (arr, size);

    if(ans){
        cout << "array is sorted"<< endl;
    }
    else{
        cout << "array is not sorted" << endl;
    }

    int sum = getsum(arr, size);
    cout << "sum is " << sum << endl;




    return 0;
}

