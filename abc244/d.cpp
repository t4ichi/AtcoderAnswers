#include<bits/stdc++.h>
using namespace std;

bool f(string s){
    return (s == "R G B" || s == "B R G" || s == "G B R");
}
int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    cout << (f(s) == f(t) ? "Yes" : "No") << "\n"; 
}
