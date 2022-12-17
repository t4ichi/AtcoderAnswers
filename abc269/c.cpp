#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    vector<ll> ans;
    for(ll i = n;;i = (i-1)&n){
        ans.push_back(i);
        if(i == 0) break;
    }
    reverse(ans.begin(),ans.end());
    for(auto i : ans){
        cout << i << "\n";
    }
}
