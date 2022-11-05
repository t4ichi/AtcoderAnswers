#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    const int MOD = 998244353;
    ll abc = a * b % MOD * c % MOD;
    ll def = d * e % MOD * f % MOD;

    cout << (abc - def) % MOD << "\n";
}