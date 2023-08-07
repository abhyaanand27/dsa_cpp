#include <iostream>
using namespace std;

// total amount of money is given find how many 100,50,20,1 notes

int main(){
    int amount;
    cout << "enter amount = " << " ";
    cin >> amount;
    int Rs100,Rs50,Rs20,Rs1;

    switch(1){
        case(1):Rs100 = amount/100;
                amount = amount%100;
                cout << "Rs 100 = " << Rs100 << endl;

        case(2):Rs50 = amount/50;
                amount = amount%50;
                cout << "Rs 50 = " << Rs50 << endl;

        case(3):Rs20 = amount/20;
                amount = amount%20;
                cout << "Rs 20 = " << Rs20 << endl;

        case(4):Rs1 = amount/1;
                amount = amount%1;
                cout << "Rs 1 = " << Rs1 <<endl;
    }
    exit(0);



    return 0;
}