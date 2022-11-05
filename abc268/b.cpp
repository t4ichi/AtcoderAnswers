#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    if(s.size() > t.size()){
        cout << "No" << "\n";
        return 0;
    }

    for(int i = 0;i < (int)s.size();i++){
        if(s[i] != t[i]){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n"; 
}