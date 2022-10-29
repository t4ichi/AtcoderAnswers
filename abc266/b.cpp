#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n;
    cin >> n;
    ll mod = 998244353;
    n %= mod;
    if(n < 0){
        n += mod;
    }
    cout << n << "\n";
}   