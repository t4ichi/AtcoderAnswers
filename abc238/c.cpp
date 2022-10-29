#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 998244353;

int main(void){
  ll n;
  cin >> n;

  int dig = to_string(n).size();
  ll cur = 9;
  ll ans = 0;
  for(int i = 1;i < dig;i++){
    ans += ((cur+1)%mod)*(cur%mod)/2;
    ans %= mod;
    cur *= 10;
  }
  cur /= 9;
  ans += ((n-cur+2)%mod)*((n-cur+1)%mod)/2;
  cout << ans%mod << "\n";
}