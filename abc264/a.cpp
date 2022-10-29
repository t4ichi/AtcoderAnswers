#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r;
    cin >> l >> r;
    string s = "atcoder";
    string ans = s.substr(l-1,(r-l)+1);
    cout << ans << "\n";
}