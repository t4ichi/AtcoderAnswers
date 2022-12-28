#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> cnt(2);
bool dfs(int v,vector<int> &color,vector<vector<int>> &g,int nc = 0){
    if(color[v] != -1) return color[v] == nc;
    color[v] = nc;
    cnt[nc]++;
    for(int v2 : g[v]){
        if(!dfs(v2,color,g,!nc)){
            return false;
        }
    }
    return true;
}

int main(){
    ll n,m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    ll ans = n * (n-1) / 2 - m;
    vector<int> color(n,-1);
    for(int i = 0;i < n;i++){
        if(color[i] != -1) continue;
        cnt = vector<int>(2);
        if(!dfs(i,color,g)){
            cout << 0 << "\n";
            return 0;
        }
        for(int j : cnt){
            ans -= (ll)j * (j-1) / 2;
        }
    }
    cout << ans << "\n";
}