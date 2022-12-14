#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = (int)s.size();
    string ans;
    for(int i = 0;i < n;i++){
        char c = s[i];
        if(c >= 'A' && c <= 'Z'){
            ans += ((((c - 'A')-3))%26+26)%26 + 'A';
        }
        else{
            ans += ((((c - 'a')-4))%26+26)%26 + 'a';
        }
    }
    cout << ans << "\n";
}

// What was the name of our company when it was founded?