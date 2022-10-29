#include<bits/stdc++.h>
using namespace std;
const int mod = 998244353;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    
    vector dp(n+1,vector<int>(k+1));

    dp[0][0] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 0;j <= k;j++){
            int cur = 0;
            for(int x = 1; x <= m;x++){
                if(j - x >= 0){
                    cur += dp[i-1][j-x];
                    cur %= mod;
                }
            }
            dp[i][j] = cur;
        }
    }
    int ans = 0;
    for(int i = 0;i < k+1;i++){
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans << "\n";
}
