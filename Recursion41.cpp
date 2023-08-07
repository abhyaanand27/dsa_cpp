#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool checkPalindrom(string str, int i, int j){

    // base case
    if(i>j)
        return true;

    if(str[i] != str[j])
        return false;

    else{
        return checkPalindrom(str, i+1, j-1);
    } 

}


int main(){

    string name = "babbab";

    bool isPalindrom = checkPalindrom(name, 0 , name.length()-1);

    if(isPalindrom){
        cout << endl << "palindrom" << endl << endl;
    }
    else{
        cout << endl << "not a palindrom" << endl << endl;
    }


    return 0;
}