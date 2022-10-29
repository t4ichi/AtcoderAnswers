#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n,a,b;
    ll p,q,r,s;
    cin >> n >> a >> b;
    cin >> p >> q >> r >> s;
    ll h = q - p + 1; 
    ll w = s - r + 1;
    vector<string> ans(h,string(w,'.'));

    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            ll x = p+i;
            ll y = r+j;
            if(a-b == x-y || a+b == x+y){
                ans[i][j] = '#';
            }
        }
    }
    for(int i = 0;i < h;i++){
        cout << ans[i] << "\n";
    }
}
