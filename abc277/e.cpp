#include<bits/stdc++.h>
using namespace std;
using P = pair<int, int>;
struct edge {
    int to;
    int leng;
};

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<edge>> G(n*2);
    for(int i = 0; i < m; ++i) {
        int u, v, a;
        cin >> u >> v >> a;
        u--;v--;
        if(a == 1){
            G[u].push_back({v, 1});
            G[v].push_back({u, 1});
        }
        else{
            G[u+n].push_back({v+n, 1});
            G[v+n].push_back({u+n, 1});
        }
    }
    for(int i = 0;i < k;i++){
        int s;
        cin >> s;
        s--;
        G[s].push_back({s+n,0});
        G[s+n].push_back({s,0});
    }

    const int INF = 1e9;
    vector<int> dist(n*2, INF);
    dist[0] = 0;
    vector<bool> done(n*2, false);
    priority_queue<P, vector<P>, greater<P>> pq;
    
    for(int v = 0; v < n*2; ++v) {
        pq.emplace(dist[v], v);
    }

    while(pq.size() > 0) {
        auto [d, v] = pq.top();
        pq.pop();
        if(done[v]) {continue;}

        for(auto e : G[v]) {
            if(dist[e.to] > dist[v] + e.leng) {
                dist[e.to] = dist[v] + e.leng;
                pq.emplace(dist[e.to], e.to);
            }
        }
        done[v] = true;
    }

    int ans = min(dist[n-1],dist[2*n-1]);
    if(ans != INF){
        cout << ans << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}
