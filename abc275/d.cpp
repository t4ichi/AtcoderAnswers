#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll n ,map<ll,ll> &memo){
    if(memo[n] != 0) return memo[n];
    return memo[n] = func()
}

int main(){
    ll n;
    cin >> n;
    map<ll,ll> memo;
    cout << func(n,memo) << "\n";
}