#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    set<string> t;
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }
    for(int i = 0;i < m;i++){
        string tt;
        cin >> tt;
        t.emplace(tt);
    }
    
    int ans = 0;
    for(int i = 0;i < n;i++){
        string ns;
        ns += s[i][3];
        ns += s[i][4];
        ns += s[i][5];

        for(auto nt: t){
            if(ns == nt){
                ans++;
            }
        }
    }
    cout << ans << "\n";
}