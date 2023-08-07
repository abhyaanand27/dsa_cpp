#include<iostream>
using namespace std;

/*
int AP(int n){
    

    for(int i=0; i<=n; i++){
        int ans = (3*i+7);

        if (i==(n-1)){
            return ans;
        }
    }
}

int main(){
    
    int n;
    cout << "Enter the value of n: " ;
    cin >> n;

    cout << "nth term is " << AP(n) << endl;

    return 0; 
}   


int setbit(int n){
    int count = 0;
    while(n!=0){
        int ans = n&1;
        
        if(ans == 1){
            count++;      
        }
        n = n>>1;
    }
    return count;
   
}


int main(){
    int a; int b;
    cout << "enter 1st num (a) " << endl;
    cin >> a;
    cout << "enter 2nd num (b) " << endl;
    cin >> b;

    int ans = setbit(a) + setbit(b);
    cout << "Total num of set bits in a and b are " << ans << endl;
    return 0;

}   */


int fabonacchi(int n){
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for(int i=1; i<=(n-2); i++){
        int temp = a+b;
        a = b;
        b = temp;
        cout << temp << " "; 

        if(i==(n-2)){
            return temp;
        }
    }
}

int main(){
    int n;
    cout << "Enter value of n " << endl;
    cin >> n;

    int fab = fabonacchi(n);
    cout << endl;
    cout << "Value at nth position is " << fab << endl;
    return 0;
}