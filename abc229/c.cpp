#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

int main(){
    int n,w;
    cin >> n >> w;
    vector<P> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.rbegin(),a.rend());
    ll ans = 0;
    for(int i = 0;i < n;i++){
        int cnt = min((int)a[i].second,w);
        w -= cnt;
        ans += a[i].first * cnt;
    }
    cout << ans << "\n";
}