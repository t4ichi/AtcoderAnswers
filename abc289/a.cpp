#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for(int i = 0;i < (int)s.size();i++){
        if(s[i] == '0'){
            ans += '1';
        }
        else{
            ans += '0';
        }
    }
    cout << ans << "\n";
}