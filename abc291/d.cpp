#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll = long long;
using mint = modint998244353;

int main() {
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0;i < n;i++){
        cin >> a[i] >> b[i];
    }
    vector<vector<mint>> dp(2,vector<mint>(n+1,0));
    dp[0][0] = 1;
    dp[1][0] = 1;
    for(int i = 0;i < n-1;i++){
        if(a[i] != a[i+1]){
            dp[0][i+1] += dp[0][i];
        }
        if(a[i] != b[i+1]){
            dp[1][i+1] += dp[0][i];
        }
        if(b[i] != a[i+1]){
            dp[0][i+1] += dp[1][i];
        }
        if(b[i] != b[i+1]){
            dp[1][i+1] += dp[1][i];
        }
    }
    mint ans = dp[0][n-1].val() + dp[1][n-1].val();
    cout << ans.val() << "\n";
}

