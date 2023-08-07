#include<iostream>
using namespace std;

#define PI 3.14

// code compile hone se pahele jaha jaha PI likha hai 
// vo haat jai gaa aur 3.14 aa jaiga and fir compile.
// can't change i.e., can't PI = PI + 1
// whereas double pi can be changed
// plus no additional memory is used
// easy to maintain code

int main(){

    int r = 5;
   
    int area = PI*r*r;
    cout << "Area is " << area << endl;

    return 0;
}