#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll a,b;
    cin >> a >> b;

    ll l = 0;
    ll r = 1e18;
    auto f = [&](ll x){
        double d = a / sqrt(1+x) + (double)x * b;
        return d;
    };
    while(abs(l-r) >= 3){
        ll mid1 = (l*2+r) / 3;
        ll mid2 = (l+r*2) / 3;
        if(f(mid1) < f(mid2)){
            r = mid2;
        }
        else{
            l = mid1;
        }
    }

    double ans = min({f(l),f(l+1),f(r)});
    cout << fixed << setprecision(10) << ans << "\n";
}
