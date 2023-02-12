#include<bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> par, rank, siz;

    // 構造体の初期化
    UnionFind(int n) : par(n,-1), rank(n,0), siz(n,1) { }

    // 根を求める
    int root(int x) {
        if (par[x]==-1) return x;
        else return par[x] = root(par[x]);
    }

    // x と y が同じグループに属するか (= 根が一致するか)
    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    // x を含むグループと y を含むグループを併合する
    bool unite(int x, int y) {
        int rx = root(x), ry = root(y);
        if (rx==ry) return false;
        if (rank[rx]<rank[ry]) swap(rx, ry);
        par[ry] = rx;
        if (rank[rx]==rank[ry]) rank[rx]++;
        siz[rx] += siz[ry];
        return true;
    }

    // x を含む根付き木のサイズを求める
    int size(int x) {
        return siz[root(x)];
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    UnionFind uf(n);
    for(int i = 0;i < m;i++){
        int a;
        cin >> a;
        a--;
        uf.unite(a,a+1);
    }

    vector<vector<int>> ans(n);

    for(int i = 0;i < n;i++){
        ans[uf.root(i)].push_back(i);
    }

    for(int i = 0;i < n;i++){
        reverse(ans[i].begin(),ans[i].end());
        for(int j : ans[i]){
            cout << j+1 << " ";
        }
    }
    cout << "\n";
}