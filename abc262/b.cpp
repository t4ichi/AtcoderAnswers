#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> g(n,vector<bool>(n));
    for(int i = 0;i < m;i++){
        int u,v;
        cin >> u >> v;
        u--;v--;
        g[u][v] = true;
        g[v][u] = true;
    }

    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            for(int k = j+1;k < n;k++){
                if(g[i][j] && g[j][k] && g[k][i]){
                    ans++;
                }
            }
        }
    }
    cout << ans << "\n";
}