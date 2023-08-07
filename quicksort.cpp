#include<bits/stdc++.h>
using namespace std;


int partition(int *arr, int s, int e){

    // finding pivot
    int pivot = arr[s];

    //counting numbers less than pivot
    int count = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // placing pivot at right position

    int pivot_index = s+count;
    swap(arr[pivot_index], arr[s]);

    // condition <a|a|>a

    int i = s, j = e;

    while(i < pivot_index && j > pivot_index){

        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
    if(i < pivot_index && j > pivot_index){
        swap(arr[i++], arr[j--]);
    }

    }

    return pivot_index;

}


void quicksort(int *arr, int s, int e){

    // base case
    if(s>=e)
        return;

    // partition 
    int p = partition(arr, s, e);

    // sort left part
    quicksort(arr, s, p-1);

    // sort right side
    quicksort(arr, p+1, e);

}



int main(){

    int arr[10] = {2,4,7 ,6,9,12,11,98,56,22};
    int n = 10;

    quicksort(arr, 0, n-1);

    for(int i = 0; i<n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}