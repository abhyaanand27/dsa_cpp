#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
 
void Words(int n, string str[])
{
 
    // base case
    if (n == 0) {
        return ;
    }
 
     // split the number into parts
    
    int num = n % 10;
    n = n / 10;
 
    // recursive functiion
    Words(n, str);
 
    
    
    cout << str[num] << " ";
}
 
int main()
{
 
    string str[10]
        = { "zero", "one", "two",  "three", "four","five", "six", "seven", "eight", "nine" };
    int n;
    cin>>n;
 
    Words(n, str);

    return 0;
}