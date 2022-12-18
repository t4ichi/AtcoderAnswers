#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll x;
    int k;
    cin >> x >> k;

    ll d = 1;
    for(int i = 0;i < k;i++){
        ll a = x / d % 10;
        
        d *= 10;
        x /= d;
        x *= d;
        if(a >= 5){
            x += d;
        }
    }
    cout << x << "\n";
}