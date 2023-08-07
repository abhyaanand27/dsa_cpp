#include<iostream>

using namespace std;

int main(){

/*  int num = 2;
    cout << endl;
    
    switch(num){
        case 1: cout << "First" << endl;
                break;
        case 2: cout << "Second" << endl;
                break;
        default: cout << "This is default case" << endl;
    }
    cout << endl;
    return 0;  */

     
    int amount;
    cout << "Enter amount" << endl;
    cin >> amount;

    int Rs100, Rs50, Rs20, Rs1;

    switch(1){
        case(1):Rs100 = amount/100;
                amount = amount%100;
                cout << "Number of Rs100 = " << Rs100 << endl;

        case(2):Rs50 = amount/50;
                amount = amount%50;
                cout << "Number of Rs50 = " << Rs50 << endl;

        case(3):Rs20 = amount/20;
                amount = amount%20;
                cout << "Number of Rs20 = " << Rs20 << endl;

        case(4):Rs1 = amount/1;
                cout << "Number of Rs1 = " << Rs1 << endl;
    }
    
}