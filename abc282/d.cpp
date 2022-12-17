#include<bits/stdc++.h>
using namespace std;

void dfs(int v, vector<vector<int>> &G, vector<int> &color, int &ans) {
    for(auto v2 : G[v]) {
        if(color[v2] != -1) {
            if(color[v2] == color[v]) {
                // ans++;
            }
            continue;
        }
        color[v2] = 1 - color[v];
        dfs(v2, G, color, ans);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        u--;v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<int> color(n, -1);
    int ans = 0;
    for(int v = 0; v < n; ++v) {
        if(color[v] != -1) continue;
        color[v] = 0;
        dfs(v, G, color, ans);
    }
    cout << ans << endl;
}
