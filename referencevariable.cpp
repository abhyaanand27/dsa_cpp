#include<iostream>
using namespace std;


int& func(int n){

    int num = a;
    int &ans = num;
    return ans;
}


void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}


int main(){

    /*

    int i = 5;

    //creating a ref. variable
    int &j = i;

    //changes in i or j are same
    cout << endl << i << endl << endl;
    i++;
    cout << endl << i << endl << endl;
    j++;
    cout << endl << i << endl << endl;
    
    */

   int n = 5;
   cout <<"before "<<n<< endl;
   update2(n); 
   cout <<"after "<<n<< endl;

   func(n); 


    return 0;
}