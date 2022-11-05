#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    for(int i = 1;i <= n;i++){
        sort(g[i].begin(),g[i].end());
    }
    
    for(int i = 1;i <= n;i++){
        cout << g[i].size() << " ";
        for(int j = 0;j < (int)g[i].size();j++){
            cout << g[i][j] << " ";
        }
        cout << "\n";
    }
}