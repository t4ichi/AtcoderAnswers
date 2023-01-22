#include<bits/stdc++.h>
using namespace std;

void dfs(int v,int &ans,vector<vector<int>> &G,vector<bool> &used){
    if(ans == 1e6) return;
    ans++;
    used[v] = true;
    for(auto v2 : G[v]){
        if(used[v2]) continue;
        dfs(v2,ans,G,used);
    }
    used[v] = false;
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
    int ans = 0;
    vector<bool> used(n,false);

    dfs(0,ans,G,used);

    cout << ans << "\n";
}
