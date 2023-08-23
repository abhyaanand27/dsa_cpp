#include<iostream>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.length();
    int x = 0;
    bool flag = true;
    if(n%2 != 0){
        return false;
    }

    string substr = "";
        
}

int main(){

    string s = "abac";
    int ans = repeatedSubstringPattern(s);
    cout << ans << endl;

}


