#include<iostream>
#include<climits>
using namespace std;

/*
void printarray(int arr[], int size){
    cout << "Printing array" << endl;
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int num[5]={1,5,3,8,9};
    printarray(num,5);
}
*/


// MIN MAX FUNCTION IN AN ARRAY

/*
int getmax(int arr[], int size){
    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int getmin(int arr[], int size){
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main(){
    int size;
    cout << "Enter size of array " << endl;
    cin >> size;

    cout << "Enter elements of the array" << endl;
    int num[100];
    for(int i = 0; i<size; i++){
        cin >> num[i];
    }
    cout << "Max value is " << getmax(num,size) << endl;
    cout << "Min value is " << getmin(num,size) << endl; 
    return 0;
}
*/

// LINEAR SEARCH 

/*
bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }    
    }
    return 0;
}

int main(){
    int num[10] = {1,6,-4,5,8,19,-22,35,-9,8};
    cout << num << endl;
    int key;
    cout << "Enter number to find" << endl;
    cin >> key;

    bool found = search(num, 10, key);

    if(found){
        cout << "Number is present in the array" << endl;
    }
    else{
        cout << "Number is absent in the array" << endl;
    }
}

*/

// REVERSE AN ARRAY

/*
void printarray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    cout << "Enter element  of array" << endl;
    int arr[100];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << "Original array" << endl;
    printarray(arr, size);
    
    reverse(arr, size);

    cout << "Reversed array" << endl;
    printarray(arr, size);
}
*/

// PRINT SUM OF ALL ELEMENT IN AN ARRAY

int printsum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;

    cout << "Enter elements" << endl; 
    int num[100];
    for(int i=0; i<size; i++){
        cin >> num[i];
    } 
    int sumofarray = printsum(num,size);
    cout << "Sum of all element of array is " << sumofarray << endl;
}