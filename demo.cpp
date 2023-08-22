#include<iostream>
using namespace std;

bool repeatedSubstringPattern(string s) {
        string substr = "";
        for(int i = 0; i<=s.length()-1; i++) {
            substr += s[i];
            for(int j=1; j <= (s.length()/substr.length()); j++){
                substr += substr;
            }
            if(substr == s) {
                return true;
            }
        }
        return false;

    }

int main(){

    string s = "abab";
    int ans = repeatedSubstringPattern(s);
    cout << ans << endl;

}


