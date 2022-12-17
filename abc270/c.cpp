#include<bits/stdc++.h>
using namespace std;

void dfs(int v, vector<vector<int>> &G, vector<bool> &seen, vector<int> &prev) {
    seen[v] = true;
    for(auto v2 : G[v]) {
        if(seen[v2]) {continue;}
        prev[v2] = v;
        dfs(v2, G, seen, prev);
    }
    return;
}

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    const int INF = 2e5+10;
    vector<vector<int>> G(INF);

    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<bool> seen(INF, false);
    vector<int> prev(INF, -1);
    dfs(x, G, seen, prev);

    vector<int> order;
    int now = y;
    while(now != -1) {
        order.push_back(now);
        now = prev[now];
    }
    reverse(order.begin(),order.end());
    for(auto i : order){
        cout << i << " ";
    }
    cout << "\n";
}
