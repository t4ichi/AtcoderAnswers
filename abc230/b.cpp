#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    for(int i = 0;i < 10;i++){
        t += "oxx";
    }
    if(t.find(s) != string::npos){
        cout << "Yes" << "\n";
    }
    else{
        cout << "No" << "\n";
    }
}