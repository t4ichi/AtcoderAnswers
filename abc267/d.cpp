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
    const ll INF = 1e18;
    vector dp(n+1,vector<ll>(m+1,-INF));
    dp[0][0] = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j <= m;j++){
            dp[i+1][j] = max(dp[i][j],dp[i+1][j]);
            if(j > 0){
                dp[i+1][j] = max(dp[i+1][j],dp[i][j-1]+a[i]*j);
            }
        }
    }
    cout << dp[n][m] << "\n";
}