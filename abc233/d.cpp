#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0;i < n;i++) cin >> a[i];
    vector<ll> s(n+1);
    for(int i = 0;i < n;i++) s[i+1] = s[i] + a[i];

    ll ans = 0;
    map<ll,ll> mp;
    for(int i = 1;i <= n;i++){
        mp[s[i-1]]++;
        ans += mp[s[i]-k];
    }
    cout << ans << "\n";
}