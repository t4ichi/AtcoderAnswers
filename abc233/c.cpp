#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int ans = 0;
int n;
ll x;

void rec(int cn,ll sum,vector<vector<int>> &a){
    if(cn == n){
        if(sum == x)ans++;
        return;
    }
    for(int i :a[cn]){
        if(sum > x/i)continue;
        rec(cn+1,sum*i,a);
    }
}

int main(){
    cin >> n >> x;
    vector<vector<int>> a(n);
    for(int i = 0;i < n;i++){
        int l;
        cin >> l;
        for(int j = 0;j < l;j++){
            int k;
            cin >> k;
            a[i].push_back(k);
        }
    }
    rec(0,1,a);

    cout << ans << "\n";
}