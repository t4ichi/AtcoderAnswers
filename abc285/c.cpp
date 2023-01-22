#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;

    ll ans = 0;
    ll digit = 1;
    
    for(int i = s.size()-1;i >= 0;i--){
        int n = s[i] - 'A' + 1;
        ans += digit * n;
        digit *= 26;
    }
    cout << ans << "\n";
}
