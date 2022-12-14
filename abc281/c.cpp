#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int main(){
    int n;
    ll t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    ll nt = t % accumulate(a.begin(),a.end(),(ll)0);
    vector<ll> sum(n+1);
    for(int i = 0;i < n;i++){
        sum[i+1] = sum[i] + (ll)a[i];
        if(sum[i+1] > nt){
            cout << i+1 << " " << (ll)(nt - sum[i])  << "\n";
            return 0;
        }
    }
}
