#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    if(s.size() < t.size()){
        cout << "No" << "\n";
        return 0;
    }
    
    for(int i = 0;i <= s.size()-t.size();i++){
        string ns;
        for(int j = i;j < i+t.size();j++){
            ns += s[j];
        }
        if(ns == t){
            cout << "Yes" << "\n";
            return 0;
        }
    }
    cout << "No" << "\n";
}