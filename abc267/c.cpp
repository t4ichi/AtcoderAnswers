#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    ll s = 0;
    ll sum = 0;
    for(int i = 0;i < m;i++){
        s += a[i] * (i+1);
        sum += a[i];
    }
    ll ans = s;
    for(int i = m;i < n;i++){
        ll s2 = s - (sum - m * a[i]);
        ans = max(ans,s2);
        s = s2;
        sum -= a[i-m];
        sum += a[i];
    }
    cout << ans << "\n";
}
