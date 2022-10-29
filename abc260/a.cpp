#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s[0] != s[1] && s[0] != s[2]){
        cout << s[0] << "\n";
        return 0;
    }
    if(s[1] != s[0] && s[1] != s[2]){
        cout << s[1] << "\n";
        return 0;
    }
    if(s[2] != s[0] && s[2] != s[1]){
        cout << s[2] << "\n";
        return 0;
    }
    cout << "-1" << "\n";
    return 0;
}