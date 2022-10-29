#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;

int main(){
    int n,m;
    cin >> n >> m;
    dsu uf(n);
    vector<int> d(n);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        if(uf.same(a,b)){
            cout << "No" << "\n";
            return 0;
        }
        uf.merge(a,b);
        d[a]++;d[b]++;
    }
    for(int i = 0;i < n;i++){
        if(d[i] > 2){
            cout << "No" << "\n";
            return 0;
        }
    }
    cout << "Yes" << "\n";
}
