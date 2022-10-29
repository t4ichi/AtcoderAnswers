#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    s.insert(0,"0");
    s.pop_back();
    cout << s << "\n";
}