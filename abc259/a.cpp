#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;

    if(m > x){
        cout << t << "\n";
    }
    else{
        int ans = t;
        for(int i = n;i >= m;i--){
            if(i >= x) continue;
            ans -= d;
        }
        if(ans <= 0){
            ans = 1;
        }
        cout << ans << "\n";
    }

}