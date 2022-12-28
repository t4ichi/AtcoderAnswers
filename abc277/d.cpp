#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct UnionFind {
    vector<int> par, siz;
    //初期化
    UnionFind(int n) : par(n), siz(n, 1) {
        for(int i = 0; i < n; ++i) {par[i] = i;}
    }
    //根
    int root(int x) {
        if(par[x] == x) {return x;}
        return par[x] = root(par[x]);
    }
    //同じグループか
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    //合併
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y);
        if (rx == ry) return false;
        if (siz[rx] < siz[ry]) swap(rx, ry);
        par[ry] = rx;
        siz[rx] += siz[ry];
        return true;
    }
    //根付き木のサイズ
    int size(int x) {
        return siz[root(x)];
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    UnionFind uf(n);
    for(int i = 0;i < n;i++){
        int j = (i+1) % n;
        if(a[i] == a[j] || (a[i]+1)%m == a[j]){
            uf.unite(i,j);
        }
    }
    vector<ll> sum(n);
    for(int i = 0;i < n;i++){
        int idx = uf.root(i);
        sum[idx] += a[i];
    }
    ll mx = 0;
    for(int i = 0;i < n;i++){
        mx = max(mx,sum[i]);
    }
    ll s = accumulate(a.begin(),a.end(),0ll);
    cout << s - mx << "\n";
}
