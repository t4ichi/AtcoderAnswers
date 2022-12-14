#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){  
    int n = 9;
    vector<string> s(n);
    vector<P> p;
    set<P> st;
    for(int i = 0;i < n;i++){
        cin >> s[i];
        for(int j = 0;j < n;j++){
            if(s[i][j] == '#'){
                p.emplace_back(j,i);
                st.emplace(j,i);
            }
        }
    }
    int ans = 0;
    for(int i = 0;i < (int)p.size();i++){
        for(int j = 0;j < (int)p.size();j++){
            if(i == j) continue;
            P a = p[i];
            P b = p[j];
            int dx = b.first - a.first;
            int dy = b.second - a.second;
            P c(b.first+dy,b.second-dx);
            P d(c.first-dx,c.second-dy);
            if(st.count(c) && st.count(d)){
                ans++;
            }
        }
    }
    cout << ans / 4 << "\n";
}