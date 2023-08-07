#include<iostream>
using namespace std;

int main(){

    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;

    int sum=amount1+amount2
    cout<<sum;

    return 0;
    

    int a = 'a';
    cout<< a <<endl;

    char ch = 98;
    cout<< ch << endl;

    char ch1 = 123456;
    cout << ch1 << endl;


    int a = 2;
    int b = 3;

    bool first = (a!=b);
    cout << first << endl;


    int a;
    cin >> a;
    
    if (a>0){
        cout << "a is positive" << endl;
    }
    else{
        cout << "a is negative" << endl;
    }



    int a, b;
    cin>>a>>b;

    cout<<"value of a and b is "<<a<<" and "<<b<<endl;


    int a;
    a = cin.get();
    cout << "value of a is: " << a << endl;




    int a,b;

    cout << "Enter the value of a: " << endl;
    cin>>a;
    cout << "Enter the value of b: " << endl;
    cin>>b;

    if (a>b){
        cout << "a is greater" << endl;
    }

    if (b>a){
        cout << "b is greater" << endl;
    }


    int a;
    cout << "Enter the value of a: " << endl;
    cin>>a;

    if(a>0){
        cout<<"a is a positive number"<<endl;
    }

    else{
        if(a<0){
            cout << "a is a negative number "<< endl;
        }
        else{
            cout << "a is zero"<< endl;
        }
    }


}