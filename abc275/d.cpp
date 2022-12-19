#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll func(ll n ,map<ll,ll> &memo){
    if(memo[n] != 0) return memo[n];
    if(n == 0) return 1;
    return memo[n] = func(n/2,memo) + func(n/3,memo);
}

int main(){
    ll n;
    cin >> n;
    map<ll,ll> memo;
    cout << func(n,memo) << "\n";
}