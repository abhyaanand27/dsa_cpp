#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/*
void revstr(string ss[], int size){

    int s = 0;
    int e =  size-1;

    while(s<e){
        swap(ss[s],ss[e]);
        s++;
        e--;
    }
}




int main(){

int size;
cout << "enter number of words in sentence= " << " ";
cin >> size;

string ss[100];
cout << "enter sentance" << endl;
for(int i=0; i<size; i++){
    cin >> ss[i];
}
for(int i=0; i<size; i++){
    cout << ss[i] << " ";
}


cout << revstr[ss, size] << endl;



    return 0;
}
*/



void tokenize(string s, string del = " ")
{
	int start, end = -1*del.size();
	do {
		start = end + del.size();
		end = s.find(del, start);
		cout << s.substr(start, end - start) << endl;
	} while (end != -1);
}
int main(int argc, char const* argv[])
{
	// Takes C++ string with any separator
	string a = "How$%do$%you$%do$%!";
	tokenize(a, "$%");
	cout << endl;

	return 0;
}
